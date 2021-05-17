"""
This python script is divided at the moment into 2 tools: generation and compilation.

The generator tool works without problems on any platform, but the second tool is more
oriented to linux platforms, that does not mean that it does not work on windows.

You can run the build tool on windows by using the following tools:
- MSYS2
- CYGWIN
- WSL
- MinGW
- or other toolkits that create a linux environment on your windows

If you use CYGWIN OR MinGW, make sure you have the tools in your PATH so the
script can work smoothly.

In case you prefer to use MSYS2 or WSL, the script must be executed within the
native terminal of the environment.
"""

import os
import sys
import platform
from datetime import datetime


EXIT_SUCCESS = 0
EXIT_FAILED = 1


# General purpose functions
################################################################################
def clean_output():
    if platform.system() == "Windows":
        os.system("cls")
    elif platform.system() == "Linux" or platform.system() == "Darwin":
        os.system("clear")


def get_user_name():
    return os.environ["USERNAME"]


def get_current_worspace():
    return os.path.join(os.getcwd())


def get_path_separator():
    if platform.system() == "Windows":
        return "/"
    elif platform.system() == "Linux" or platform.system() == "Darwin":
        return "\\"


def get_arg_value(args, prefix):
    value = None
    for val in args:
        if val.startswith(prefix):
            value = val.replace(prefix, "").replace("\"", "")
            break
    return value
################################################################################


class TemplateGenerator:
    """ Used to generate project templates """

    def __init__(self):
        super(TemplateGenerator, self).__init__()
        self.__project_path = None
        self.__project_description = None
        self.__project_name = None

    def add_path(self, name: str):
        self.__project_path = name
        chunks = self.__project_path.split("/")
        self.__project_name = chunks[len(chunks) - 1]

    def add_description(self, description: str):
        self.__project_description = description

    def __create_workspace(self):
        path_separator = get_path_separator()
        if path_separator in self.__project_path:
            folders = self.__project_path.split(path_separator)
            path = ""
            for f_index in range(len(folders)):
                path += folders[f_index] + path_separator
                try:
                    os.mkdir(path)
                except:
                    pass
        else:
            try:
                os.mkdir(self.__project_path)
            except Exception as e:
                print("Directory already exists")

    def __load_comments(self, file):
        file.write("/*\n")
        file.write(f" * {'=' * 75}\n")
        file.write(f" * Name        : {self.__project_name}\n")
        file.write(f" * Author      : {get_user_name()}\n")
        file.write(f" * Version     : 1.0.0\n")
        file.write(f" * Description : {self.__project_description}\n")
        file.write(f" * Created on  : {datetime.now()}\n")
        file.write(f" * {'=' * 75}\n")
        file.write(" */\n")

    def __load_source(self, file):
        file.write("#include <iostream>\n")
        file.write("#include <cstdlib>\n\n")
        file.write("using namespace std;\n\n")
        file.write("int main(int argc, char const *argv[]) {\n")
        file.write(f"{' ' * 4}cout << \"Hello world\" << endl;\n")
        file.write(f"{' ' * 4}return EXIT_SUCCESS;\n")
        file.write("}\n")

    def generate(self):
        self.__create_workspace()
        try:
            with open(f"{self.__project_path}{get_path_separator()}main.cpp", "w") as file:
                self.__load_comments(file)
                self.__load_source(file)
                clean_output()
                print("Operation successful")
        except Exception as e:
            print(str(e))


class ProjectCompiler():
    """ Used to compile generated projects """

    def __init__(self, path_name =  None, exec = False):
        super(ProjectCompiler, self)
        self.__workspace = get_current_worspace() + get_path_separator() + path_name.replace("/", get_path_separator())
        self.__to_execute = exec

    def __check_workspace(self):
        if os.path.exists(self.__workspace):
            return True
        else:
            print(f"Directory \"{workspace}\" not found")
            return False

    def __check_source(self):
        file_path = self.__workspace + get_path_separator() + "main.cpp"
        if os.path.exists(file_path):
            return True
        else:
            print(f"El archivo {workspace} no existe")
            return False

    def __check(self) -> bool:
        if self.__check_workspace():
            if self.__check_source():
                return True
            else:
                return False
        else:
            return False

    def execute(self):
        if self.__check():
            clean_output()
            execution = os.system("g++ --version")
            if execution == 0:
                source_file = self.__workspace + get_path_separator() + "main.cpp"
                target_file = ""
                if platform.system() == "Windows":
                    target_file = self.__workspace + get_path_separator() + "main.exe"
                else:
                    target_file = self.__workspace + get_path_separator() + "main.out"
                execution = os.system(f"g++ {source_file} -o {target_file}")
                if execution == 0:
                    print("Compiling... done")
                    if self.__to_execute:
                        if platform.system() == "Windows":
                            print("Running...\n")
                            execution = os.system(target_file)
                        else:
                            print("Running...\n")
                            execution = os.system(f"./{target_file}")
                        print("\nProcess ended with exit code", execution)
                    else:
                        print("The compilation was successful")
                else:
                    print("\Oops, you seem to have trouble with your code. Fix it and compile it again")
            else:
                print("The c++ compiler was not detected on your path")


def show_help():
    print("new     : use this option to generate a project template")
    print("          [-name] project name")
    print("          [-dsc] project description")
    print("compile : use this option to compile a project")
    print("          [-path] work path")
    print("          [--run] to run the compiled binary")
    print("          \"compile dates/array\"")


def main():
    args = sys.argv
    if len(args) > 1:
        first_arg = args[1]
        if args[1] == 'new':
            path_name = get_arg_value(args, "-path=")
            if path_name is not None and path_name != "":
                template = TemplateGenerator()
                template.add_path(path_name)
                description = get_arg_value(args, "-dsc=")
                if description is not None:
                    template.add_description(get_arg_value(args, "-dsc="))
                else:
                    template.add_description("Undefinned")
                template.generate()
            else:
                print("You must indicate a name or path")
        elif args[1] == 'compile':
            path_name = get_arg_value(args, "-path=")
            if path_name is not None and path_name != "":
                if ":" in path_name:
                    print("Please enter a valid route.\nThe path of the subfolders must not start with \"/\"")
                else:
                    to_execute = False
                    if "--run" in args:
                        to_execute = True
                    ProjectCompiler(path_name, to_execute).execute()
            else:
                print("You must indicate a name or path")
        else:
            print("The task you entered was not recognized")
            show_help()
    else:
        print("It must indicate a task")
        show_help()

if __name__ == '__main__':
    main()

import os
import sys
import platform
from datetime import datetime

EXIT_SUCCESS = 0
EXIT_FAILED = 1


def get_user_name():
    return os.environ["USERNAME"]


def clean_output():
    if platform.system() == "Windows":
        os.system("cls")
    elif platform.system() == "Linux" or platform.system() == "Darwin":
        os.system("clear")


def load_comments(**kwargs):
    file = kwargs['f']
    # Generation of comments and descriptions
    file.write("/*\n")
    file.write(f" * {'=' * 75}\n")
    # Project name
    file.write(f" * Name        : {dir}\n")
    # Project author
    file.write(f" * Author      : {get_user_name()}\n")
    # Project version
    file.write(f" * Version     : 1.0.0\n")
    # Project description
    file.write(f" * Description : {kwargs['d']}\n")
    # Project date
    file.write(f" * Created on  : {datetime.now()}\n")
    # Ending info
    file.write(f" * {'=' * 75}\n")
    file.write(" */\n")


def load_source(file):
    file.write("#include <iostream>\n")
    file.write("#include <cstdlib>\n\n")
    file.write("using namespace std;\n\n")
    file.write("int main(int argc, char const *argv[]) {\n")
    file.write(f"{' ' * 4}cout << \"Hello world\" << endl;\n")
    file.write(f"{' ' * 4}return EXIT_SUCCESS;\n")
    file.write("}\n")


def initialize_source(dir: str, description: str = "undefined"):
    try:
        with open(f"{dir}/main.cpp", "w") as file:
            load_comments(f=file, d=description)
            load_source(file)
            clean_output()
            print("Operation successful")
    except Exception as e:
        print(str(e))


def create_workspace(dir: str):
    if '/' in dir:
        folders = dir.split('/')
        path = ""
        for f_index in range(len(folders)):
            path += folders[f_index] + "/"
            try:
                os.mkdir(path)
            except:
                pass
    else:
        try:
            os.mkdir(dir)
        except Exception as e:
            print("El directorio ya existe.")


def main() -> int:
    workspace_name: str = str(input("Enter workspace name: "))
    if len(workspace_name) > 0:
        description: str = str(input("Description: "))
        create_workspace(workspace_name)
        if len(description) > 0:
            initialize_source(workspace_name, description)
        else:
            initialize_source(workspace_name)
        return EXIT_SUCCESS
    else:
        print("The workspace could not be created")
        return EXIT_FAILED


if __name__ == '__main__':
    sys.exit(main())

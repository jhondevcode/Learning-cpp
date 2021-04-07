import sys
import os

def create_workspace(dir):
    try:
        os.mkdir(dir)
    except Exception as e:
        print(str(e))

    try:
        with open(f"{dir}/main.cpp", "w") as file:
            file.write("#include <iostream>\n")
            file.write("#include <cstdlib>\n\n")
            file.write("using namespace std;\n\n")
            file.write("int main(int argc, char const *argv[]) {\n")
            file.write(f"{' ' * 4}cout << \"Hello world\" << endl;\n")
            file.write(f"{' ' * 4}return EXIT_SUCCESS;\n")
            file.write("}\n")
    except Exception as e:
        print(str(e))
    os.system("clear")
    print("Operation successful")


if __name__ == '__main__':
    workspace: str = str(input("workspace: "))
    if len(workspace) > 0:
        create_workspace(workspace)
    else:
        print("Error creating workspace")

#Dynamic_Libraries in C. --> Also known as a shared library.
	advantage over static libraries: Saves on size,
					 Don't need to recompile to access the updated executable

Create Position Independent Code: gcc -fPIC -c < .c file >
		: produces the object file < .o extension>
create a dynamic library: gcc -shared -o <libdynamic.so> <first object file> <sec object file> # you can always change the name of the .so file
	.so means shared object

you can add a number of object files you want to save in the dynamic library

create an executable file with the main funtion calling files in share library.
	: gcc -o <demo executable> <demo object file> <shared library>
	: gcc -o demo demo.o libdynamic.so

$LD_LIBRARY_PATH: env variable that specifies the directories in which the dynamic linker should search for shared libraries before searching the standard location.

	Set is temporarily using: export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH

	or permanently in shell configurations: .bashrc, .zshrc

nm: Displays symbol table info from object files of binaries
ldd: Prints shared library dependencies of an executable
ldconfig: configures dynamic linker tun-time bindings. it is typically used after installing new shared libraries.

# the executable
1-create_dynamic_lib.sh --> creates a shared library liball.so from the *.c files in the present directory.

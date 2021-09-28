#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 3){
        mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
		return -1;
	}
    int fd_out = open(argv[1], O_RDONLY);
    if(fd_out < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        return -1;
    }
    int fd_inp = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
	char buffer;
    while (read(fd_out, &buffer, 1))
        write(fd_inp, &buffer, 1);
    close(fd_out);
    close(fd_inp);
    exit(0);
}

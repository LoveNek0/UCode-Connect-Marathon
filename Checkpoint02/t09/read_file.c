void mx_printchar(char c);
void mx_printerr(const char *s);

int main(int argc, char *argv[]) {
	if(argc != 2){
		mx_printerr("usage: ./read_file [file_path]\n");
		return -1;
	}
	int fd = open(argv[1], O_RDWR);
	if(fd < 0){
		mx_printerr("error\n");
		return -1;
	}
	else {
		char ch;
		int ref;
		while ((ref = read(fd, &ch, 1)) > 0) {
			mx_printchar(ch);
			if (ref < 0) {
				mx_printerr("error\n");
				return -1;
			}
		}
		mx_printchar('\n');
		close(fd);
	}
    return 0;
}

void mx_printchar(char c){
    write(1, &c, 1);
}

void mx_printerr(const char *s){
    while (*s != '\0')
        write(STDERR_FILENO, s++, 1);
}

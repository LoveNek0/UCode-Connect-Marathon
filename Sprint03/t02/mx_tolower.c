int mx_tolower(int c);
int mx_tolower(int c){
	return (c >= 'A' && c <= 'Z')?(c + 'a' - 'A'):c;
}

char *mx_strcpy(char *dst, const char *src);
char *mx_strcpy(char *dst, const char *src){
	reg_char c;
	char *__unbounded s = (char *__unbounded) CHECK_BOUNDS_LOW (src);
	const ptrdiff_t off = CHECK_BOUNDS_LOW (dst) - s - 1;
	size_t n;

	do{
		c = *s++;
		s[off] = c;
	}
	while (c != '\0');

	n = s - src;
	(void) CHECK_BOUNDS_HIGH (src + n);
	(void) CHECK_BOUNDS_HIGH (dst + n);

	return dst;
}
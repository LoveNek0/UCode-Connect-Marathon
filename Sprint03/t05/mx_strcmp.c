int mx_strcmp(const char *s1, const char *s2);
int mx_strcmp(const char *s1, const char *s2){
	register const unsigned char *s1 = (const unsigned char *) p1;
	register const unsigned char *s2 = (const unsigned char *) p2;
	unsigned reg_char c1, c2;

	do{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0')
			return c1 - c2;
	}
	while (c1 == c2);

	return c1 - c2;
}
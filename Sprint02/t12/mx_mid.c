int mx_mid(int a, int b, int c){
	double d = ((double)a+(double)b+(double)c)/3;
	if(d - (int)d >= 0.5)
		return (int)d+1;
	else
		return (int)d;
}

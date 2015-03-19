
def main():
	n=(raw_input().split());
	n = map(int, n);
	q = n[1];
	n = n[0];
	a=(raw_input().split());
	#a = map(int, a);
	a = list(a);
	for i in xrange(q):
		l = raw_input().split();
		l = map(int ,l);
		r = l[1];
		l = l[0];
		c = a[l-1:r];
		c.sort();
		sum=0;
		for j in xrange(len(c)):
			sum= sum +c[j]*(j+1);
		print sum;


main();
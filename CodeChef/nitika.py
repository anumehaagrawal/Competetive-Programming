s=int(raw_input());
while(s>0):
 
	r=raw_input();
	r.lower();
	mm=r.split();
	m=" "
	for i in range(len(mm)-1):
		m=m+mm[i][0].upper()+". "
	m=m+mm[len(mm)-1].title()
	print m
	print "\n"
	s=s-1 
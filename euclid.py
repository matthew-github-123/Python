def euclid(m, n):
	r = 0
	while n != 0:
		r = m % n
		m = n
		n = r
	return m

print euclid(60, 24)

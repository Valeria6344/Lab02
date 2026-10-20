a = 'Hello world'
b = a
c = a[:]
print(a, id(a))
print(b, id(b))
print(c, id(c))
print(b is a)
print(c is a)
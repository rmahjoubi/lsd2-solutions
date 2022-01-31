import numpy as np

a = np.arange(3)
b = np.ones((3,3,3))

print(np.concatenate((np.repeat(a, 3), np.tile(a, 3))))

print(a + b)

print(b.reshape(3, 9))

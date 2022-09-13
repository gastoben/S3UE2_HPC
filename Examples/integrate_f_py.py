def f(x):
    return -4 * x**3 + 3 * x**2 + 2*x

def integrate_f_py(a, b, N):
    s  = 0
    dx = (b - a) / (N - 1)
    # boucle mauvaise en performance
    for i in range(N - 1): 
        x = a + i * dx
        s += (f(x) + f(x + dx)) / 2
    return s * dx

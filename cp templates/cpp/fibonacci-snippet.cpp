// recursive fibonacci function(n>=0)
map<int, int> mem;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    if(mem.find(n) != mem.end()) {
        return mem[n];
    }
    return mem[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

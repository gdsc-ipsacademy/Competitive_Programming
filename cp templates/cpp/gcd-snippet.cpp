long long int gcd(long long int a, long long int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

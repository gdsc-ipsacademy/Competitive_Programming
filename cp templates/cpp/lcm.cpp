int lcm(int a, int b){
  int g=__gcd(a, b); 
  return a/g*b;
}

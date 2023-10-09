// positive decimal to binary
int decimalToBinary(int decimal)
{
    int binary = 0, base = 1;
    while (decimal > 0)
    {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

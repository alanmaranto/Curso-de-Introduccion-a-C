int main()
{
    int n = 10, acum = 10;

    do
    {
        acum += n;
        n++;
    } while (acum < 10);

    return acum;
}
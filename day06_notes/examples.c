// Pass by value example
void modify_value(int x)
{
    x = 20;
}

// Pass by pointer example
void modify_pointer(int *p)
{
    *p = 20;
}

int main(void)
{
    int a = 10;

    modify_value(a);     // a remains 10
    modify_pointer(&a);  // a becomes 20

    while(1)
    {
    }
}

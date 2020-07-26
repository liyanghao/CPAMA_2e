//ch16_3_3.c

//结构体标记
struct dialing_code {
    char *country;
    int code;
};

int main()
{
    const struct dialing_code country_codes[] =
    {
        {"Argetina", 84}, {"Bangladesh", 880},
        {"Brazil", 55}, {"China", 86}
    };
    
    return 0;

}
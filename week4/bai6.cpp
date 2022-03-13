double calculate (double num1, char operat, double num2)
{
    if(operat=='+')
    return num2+num1;
    if(operat=='-')
    return num1-num2;
    if(operat=='/')
    return num1/num2;
    else 
    return num1*num2;
}
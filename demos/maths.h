 
int addI(int a,int b)
{
    return a+b;
}
int compoundInst(int p,int r,int n)
{
      int amount,ci;
      int temp = 1;
      for(int i=1;i<=n;i++)
      {
        temp =  temp * (1+(r/100));
      }
      ci = p*temp;
      amount = p+ci;
      return amount;
}
int simpleInterest(int p,int r,int n)
{
    int interest,amount;
    interest = (p*n*r)/100;
    amount = interest + p;
    return amount;
}
float addF(float a,float b)
{
    return a+b;
}
int seal(float a)
{
    int result;
    result = a;
    return result+1;
}
int floor(float a)
{
    int result;
    result = a;
    return result;
}
float percentage(int value, float pertg)
{
    return value*(pertg/100);
}

 

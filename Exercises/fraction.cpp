class Fraction
{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator)
        {
            this->numerator=numerator;
            this->denominator=denominator;
        }

        //Constant Functions return always the same thing
        int getNUmerator() const
        {
            return numerator;
        }

        int getDenominator() const
        {
            return denominator;
        }

        void setDenominator(int deno)
        {
            this->denominator=deno;
        }

        void setNumerator(int num)
        {
            this->numerator=num;
        }

        void display() const
        {
            cout<<"Fraction"<<endl;
            cout<<numerator<<"/"<<denominator;
        }

        void simplify()
        {
            int gcd;
            int min_val=min(this->numerator,this->denominator);
            for(int i =1;i<=min_val;i++)
            {
		 		if(this->numerator%i==0&& this->denominator%i==0)
                {
		 			gcd= i;
				}
			}
			 
			numerator= numerator/gcd;
			denominator= denominator/gcd;	 
        }

        //Reference Function
        Fraction& operator+=(Fraction const &f2)
        {
            int lcm=this->denominator*f2.denominator;
            int x=lcm/this->denominator;
            int y=lcm/f2.denominator;
            int num=(x*this->numerator)+(y*f2.numerator);
            int deno=lcm;
            this->numerator=num;
            this->denominator=deno;
            simplify();
            return *this;
        }

        bool operator==(Fraction const &f2)
        {
            return(this->numerator==f2.numerator && this->denominator=f2.denominator);
        }





};
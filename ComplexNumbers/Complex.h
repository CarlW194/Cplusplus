//Complex.h

class Complex{
	
	public:
		double getReal();
		void setReal(double num);
		double getImag();
		void setImag(double num);
		void print();
		
		Complex Add(const Complex &z);
		Complex Subtract(const Complex &z);
		Complex Multiply(const Complex &z);

	protected:
		double real_;
		double imag_;
};



template <typename T>
class Stack {
private:
	T* element;
	int top;
	int n;
	
public:
	Stack(int s = 10)
	{
		n = s > 0 && s < 1000 ? s : 10;
		top = -1;
		element = new T[n];
	}
	~Stack() {
		delete[] element;
	}
	bool push(const T& p)
	{
		if (Stack::isFull())
			return false;
		else
		{
			Stack::element[++top] = p;
			return true;
		}
	}
	bool pop(T& p) {
		if (Stack::isEmpty())
		{
			return false;
		}
		else
		{
			p = Stack::element[top--];
			return true;
		}
	}
	bool isEmpty() {
		return top == -1;
	}
	bool isFull() {
		return top == n - 1;
	}


};

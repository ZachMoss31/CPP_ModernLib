#ifndef VECTORZ_H
#define VECTORZ_H

template <typename T>
class vectorz
{
public:
	//Construction
	vectorz() {
		size = 0;
		capacity = 10;
		elements = new T[capacity];
	}
	//vectorz(const T& type);
	vectorz(const T& type, int n = 0) {
		size = n;
		capacity = n * 2;
		elements = new T[capacity];
		for (int i = 0; i < size; i++) {
			elements[i] = type;
		}
	}
	vectorz(const vectorz& rhs) {
		size = rhs.size;
		capacity = rhs.Capacity();
		elements = new T[capacity];
		for (int i = 0; i < rhs.size; i++) {
			*elements[i] = rhs.elements;
		}
	}

	~vectorz() {
		delete[] elements;
	}

	//Getter Methods
	int Size() const {
		return size;
	}
	int Capacity() const {
		return capacity;
	}
	bool IsEmpty() const {
		return size == 0;
	}
	T& operator [](int index) {//Allows setting, vec[i] = 0; 
		return elements[index];
	}
	const T& operator [](int index) const { //Allows getting readyonly, x = vec[i];
		return elements[index];
	}
	vectorz& operator=(const vectorz& rhs) {//for vectorz myVec2 = myVec1;
		if (rhs.size > size) {
			delete[] elements;
			capacity = rhs.size * 2;
			elements = new T[capacity];
		}
		for (int i = 0; i < rhs.size; i++) {
			elements[i] = &rhs.elements[i];
		}
		size = rhs.size;
		return *this;
	}
	void pushback(const T& data) {
		if (size == capacity) {
			T* newVec = new T[capacity * 2];
			for (int i = 0; i < size; i++) {
				newVec[i] = elements[i];
			}
			delete[] elements;
			elements = newVec;
			capacity = capacity * 2;
		}
		elements[size] = data;
		size++;
	}
	void Insert(int index, const T& data);
	void popback() {
		if(size > 0)
			size--;
	}
	void Erase(int index) {
		for (int i = index; i < size - 1; i++) {
			elements[i] = elements[i + 1];
		}
		size--;
	}
	void Clear() {
		size = 0;
	}
private:
	int size;
	int capacity;
	T* elements;
};

#endif
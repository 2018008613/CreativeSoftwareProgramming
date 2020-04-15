template <class T>
class My_shared_ptr {
 public:
 My_shared_ptr() : m_obj(nullptr), count(nullptr) { }
 My_shared_ptr(T *obj)
 {
	 m_obj = obj;
	 count = new int;
	 *count = 1;
 }
 My_shared_ptr(const My_shared_ptr& rhs)
 {
	 if (m_obj != nullptr)
		 decrease();
	 m_obj = rhs.m_obj;
	 count = rhs.count;
	 (*count)++;
 }
 ~My_shared_ptr() 
 {
	this->decrease();
	if (this->getCount() == 0) std::cout << "everything destroyed" << std::endl;
 }
 My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs)
 {
	 if (m_obj != nullptr)
		 decrease();
	 m_obj = rhs.m_obj;
	 count = rhs.count;
	 (*count)++;
	 return *this;
 }
 const T* get_m_obj() { return this->m_obj; }
 int getCount() { return (this->count == nullptr) ? 0 : *(this->count); }
 
 private:
 void decrease()
 {
	 if (count != nullptr)
	 {
		 (*count)--;
		 if (*count == 0)
			 delete count;
		 m_obj = nullptr;
	 }
 }
 void increase()
 {
	 if (count == nullptr)
	 {
		 count = new int;
		 *count = 1;
	 }
	 else
		 (*count)++;
 }
 T *m_obj;
 int *count;
};

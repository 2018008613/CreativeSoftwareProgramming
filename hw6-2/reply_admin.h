class ReplyAdmin 
{
private:
	std::string* chats;
public:
	ReplyAdmin();
	~ReplyAdmin();
	int getChatCount();
	bool addChat(std::string _chat);
	bool removeChat(int _index);
	bool removeChat(int *_indices, int _count);
	bool removeChat(int _start, int _end);
	void print();
};

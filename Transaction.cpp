#include <stack>
#include <pair>
#include "./OrderBook.cpp"
#include "./AskOrder.cpp"
#include "./BidOrder.cpp"

class Transaction {
	int time;
	
	void set_time(int time) {
		this.time = time;
	}
	
	int get_time() {
		return this.time;
	}
	
	
}
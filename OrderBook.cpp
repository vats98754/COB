#include <stack>
#include <pair>
#include "./AskOrder.cpp"
#include "./BidOrder.cpp"

class OrderBook() {
	stack <BidOrder> BidStack;
	
	void setBidOrder(stack <BidOrder> newBidStack) {
		this.BidOrder = newBidStack;
	}
	
	stack <BidOrder> getBidOrder() {
		return BidStack;
	}
	
	stack <AskOrder> AskStack;
	
	void setAskOrder(stack <AskOrder> newAskStack) {
		this.AskOrder = newAskStack;
	}
	
	stack <AskOrder> getAskOrder() {
		return AskStack;
	}
	
	pair <stack <BidOrder>, stack <AskOder>> OrderBook;
	
	void setBidOrder(stack <BidOrder> BidStack, stack <AskOrder> AskStack) {
		this.OrderBook = {BidStack, AskStack};
	}
	
	pair <stack <BidOrder>, stack <AskOder>> getOrderBook() {
		return OrderBook;
	}
}
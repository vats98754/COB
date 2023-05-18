class BidOrder {
	int bidId;
	
	void set_id(int newId) {
		this.bidId = newId;
	}
	
	int get_id() {
		return this.bidId;
	}
	
	int price;
	
	void set_price(int newPrice) {
		this.price = newPrice;
	}
	
	int get_price() {
		return this.price;
	}
	
	int quantity;
	
	void set_quantity(int newQuantity) {
		this.quantity = newQuantity;
	}
	
	int get_quantity() {
		return this.quantity;
	}
	
	bool status;
	
	void set_status(int newStatus) {
		this.status = newStatus;
	}
	
	bool get_status() {
		return this.status;
	}
}
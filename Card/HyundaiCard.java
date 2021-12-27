package Card;

public class HyundaiCard extends Card {
	
	public int getbalance() {
		return balance;
	}
	public HyundaiCard(int getbalance) {
		
	}

	public int pay() {
		balance-=5000;
		System.out.println(balance+"원");
		return pay;
	}
	
	
	public static void main(String[] args) {
		@SuppressWarnings("unused")
		Card hCard=new HyundaiCard(100000);
		hCard.pay();	
		hCard.pay();
		hCard.pay();
		hCard.pay();
		hCard.pay();
		hCard.pay();
		hCard.pay();
		System.out.println("");
		System.out.println("최종 금액은 : "+hCard.getbalance()+"원");
	}
	
}

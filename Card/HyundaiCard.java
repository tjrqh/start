package Card;

import java.text.DecimalFormat;

public class HyundaiCard extends Card {
	static DecimalFormat f = new DecimalFormat("###,###");
	private HyundaiCard(int balance) {
	this.balance=balance;
	}

	public int pay() {
		balance -= 5000;
		System.out.println("남은 돈 : "+f.format(balance)+"원");
		return balance;
	}
	
	
	public static void main(String[] args) {
		Card hCard=new HyundaiCard(100000);
		hCard.pay();	
		hCard.pay();
		hCard.pay();
		hCard.pay();
		hCard.pay();
		hCard.pay();
		hCard.pay();
		System.out.println("");
		System.out.println("현재 잔액 : "+f.format(hCard.getbalance())+"원");
	}
	
}
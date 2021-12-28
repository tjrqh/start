package Card;
import java.text.DecimalFormat;
public class KookminCard extends Card {
	static DecimalFormat f = new DecimalFormat("###,###");
	public KookminCard(int balance) {
		this.balance=balance;
	}

	public int pay() {
		balance-=10000;
		System.out.println("남은 돈 : "+f.format(balance)+"원");
		return balance;

	}
	
	
	public static void main(String[] args) {
		Card kCard=new KookminCard(100000);
		
		kCard.pay();
		kCard.pay();
		kCard.pay();
		kCard.pay();
		
		System.out.println("");
		System.out.println("현재 잔액 : "+f.format(kCard.getbalance())+"원");
	}
	
}
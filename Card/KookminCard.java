package Card;

public class KookminCard extends Card {
	
	public int getbalance() {
		return balance;
	}
	public KookminCard(int getbalance) {
		
	}

	public int pay() {
		balance-=10000;
		System.out.println(balance+"��");
		return pay;
	}
	
	
	public static void main(String[] args) {
		@SuppressWarnings("unused")
		Card kCard=new KookminCard(100000);
		
		kCard.pay();
		kCard.pay();
		kCard.pay();
		kCard.pay();
		
		System.out.println("");
		System.out.println("���� �ݾ��� : "+kCard.getbalance()+"��");
	}
	
}
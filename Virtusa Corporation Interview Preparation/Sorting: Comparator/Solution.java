class Checker implements Comparator<Player> {
  	// complete this method
	public int compare(Player a, Player b) {
        if(a.score==b.score){
            return a.name.compareTo(b.name);
        }
        return b.score - a.score; 
    }
}

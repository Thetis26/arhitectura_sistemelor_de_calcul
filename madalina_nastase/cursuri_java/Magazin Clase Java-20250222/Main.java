package com.company;

public class Main {

    public static void main(String[] args) {
//	    Produs jucarie = new Produs("LEGO", 200, "Lego blocks");
//	    System.out.println(jucarie.toString());
//	    Produs jucarie1 = new Produs("Papusa",100,"Papusa Barbie");
//	    System.out.println(jucarie1.toString());
//        CreditCard card= new CreditCard(1234);
//	    Client Mihai= new Client("Mihai", "mihai@yahoo.com",
//                "Str. nr.1", new CreditCard(1234));
//	    Mihai.afisareDetalii();
//	    card.plateste(100);
//
	    Catalog catalog = new Catalog();
	    System.out.println(catalog.afisare());

	    CosDeCumparaturi cos = new CosDeCumparaturi();
	    cos.adaugaProdus(catalog.returneazaProdus("Aspirator"));
        cos.adaugaProdus(catalog.returneazaProdus("LEGO"));

        System.out.println(cos.totalProduse());
    }
}

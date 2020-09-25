// fjenett 20081129

import de.bezier.data.sql.*;

SQLite db;

void setup()
{
    size( 100, 100 );

    db = new SQLite( this, "coffee.db" );  // open database file

    if ( db.connect() )
    {
        
        // read all in table "table_one"
        db.query( "SELECT * FROM indirizzi" );
        
        while (db.next())
        {
          println( db.getInt("id") );
            println( db.getString("nome") );
            
        }
    }
}
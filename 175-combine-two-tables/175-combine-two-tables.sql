select p.firstname , p.lastname , a.city , a.state from
person as p left join address as a 
on p.personId = a.personid;
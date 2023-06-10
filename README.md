# fast-cgi-c

In this project I'll be exploring (Fast)CGI by writing a c programm that is able to communicate with the Apache webserver via (Fast)CGI

## CGI
To start off I implemented communication via the GCI protocoll. The programm cgi-example.c simply listens for requests of all types and echos out the request method, the url argments and body data.

## FastCGI
Turns out FastCGI is super hard to implement - which is why I decided to stop developing this project
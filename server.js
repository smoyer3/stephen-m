{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf600
{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;\csgray\c100000;\cssrgb\c0\c0\c0;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf0 \expnd0\expndtw0\kerning0
var http = require("http");\
\
function callback (req, res) \{ // req -> request object; res -> response object\
   res.writeHead(200, \{'Content-Type': 'text/plain'\}); // send response header\
   res.end("hello world"); // send response body\
\}\
\
var server = http.createServer(callback) // create an http server\
server.listen(1234, "127.0.0.1"); // make server listen to port 1234\
console.log("Server running at: "+ "http://127.0.0.1:1234");}
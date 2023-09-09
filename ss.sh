#!/bin/bash
echo 'first'
ggrep -Pzo '\[(.+\n){2}.+asdfadfasas3432423ewd3da(.+\n){2,3}(\<\/Re(sponse|quest)\>)(\n)?' test.log
echo
echo 'second'
ggrep -Pzo '\[(.+\n){2}.+asdfadfasas3432423ewd3da.+\n.+Balance(.+\n){1,2}(\<\/Re(sponse|quest)\>)(\n)?' test.log
echo
echo 'third'
ggrep -Pzo '\[(.+\n){3}\<type\>Withdrawal.+\n\<code\>[0-9]{3}[^0].+\n(\<\/Response\>)(\n)?' test.log
echo
echo 'fourth'
grep -Eo '<type>[^<]+</type>' test.log | sed -E 's/<type>([^<]+)<\/type>/\1/' | awk '{count[$0]++} END {for (type in count) print type ": "count[type]}'

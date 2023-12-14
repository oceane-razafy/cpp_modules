cp ../bin/replace .

echo
echo "================ DIFF logs =============="

# ----- Check with 'PERFECT file' (3 diffs) ----
echo
echo "- Check with 'PERFECT file' (3 diffs) ---"

echo
echo "TEST1:"
./replace test1 bad PERFECT
diff test1.replace PERFECT

echo
echo "TEST2:"
./replace test2 "" bad
diff test2.replace PERFECT

echo
echo "TEST3:"
./replace test3 "bad" ""
diff test3.replace PERFECT

echo
echo "TEST7 (replace with same word):"
./replace test7 "PERFECT" "PERFECT"
diff test7.replace PERFECT


# ----- Check with 'good' file -------
echo
echo "-------- Check with 'good' file ----------"

echo
echo "TEST4:"
./replace test4 BAD good
diff test4.replace good
echo

#---- empty/newline file (2 diffs) -----------
echo
echo "---- empty/newline file (2 diffs) ---------"

echo
echo "TEST5:"
./replace test5 ok OK
diff test5 test5.replace
echo

echo
echo "TEST6:"
./replace test6 ok OK
diff test6 test6.replace
echo

#---- Quadrule a letter 'B' -----------

echo
echo "---- Quadrule a letter 'B' ---------"

echo
echo "TEST8 (Quadruple "B" letters):"
./replace test8 "B" "BBBB"
diff test8.replace "Bx4_(BBBB)"

echo
#-------- handling ERRORS -------
echo
echo "========= Checking ERROR messages ======="

echo
echo "-- Input file does not exist (2 errors) -"
./replace "" ok OK
./replace YO ok OK

echo
echo "---- Input file with no permissions -----"
touch replaceCHECKperm
chmod 000 replaceCHECKperm
./replace replaceCHECKperm ok OK

echo
echo "---- Error while opening output file ----"
./replace /dev/stdout ok ok

echo
echo "------- Error arguments (4 errors) ------"
./replace
./replace 1
./replace 1 1
./replace 1 1 1 1
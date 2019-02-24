#gets file name from command line
file = ARGV[0]
#opens file
y = File.open(file)
#reads and prints mutations
puts y.read.gsub(/\bf/,'gh').gsub(/sh\b/,'ti').gsub(/\Bi\B/,'o').gsub(/\bF/,'GH').gsub(/SH\b/,'TI').gsub(/\BI\B/,'O')	


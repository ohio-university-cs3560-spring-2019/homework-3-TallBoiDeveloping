#gets file name from command line
file = ARGV[0]
#opens file
File.open(file)
y = $stdin.read
#reads and prints mutations
$stdout.puts y.read.gsub(/\bf/,'gh').gsub(/sh\b/,'ti').gsub(/\Bi\B/,'o').gsub(/\bF/,'GH').gsub(/SH\b/,'TI').gsub(/\BI\B/,'O')

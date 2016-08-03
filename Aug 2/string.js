function reverse(str) {
	if(str) {
		return reverse(str.substring(1, str.length)) + str[0];
	}
	return '';
}

function IsPalindrome(str) {
	var p = 0;
	var q = str.length - 1;

	while(q > p && str[p] == str[q]) {
		p++;
		q--;
	}

	if(p >= q) {
		return true;
	}
	return false;
}


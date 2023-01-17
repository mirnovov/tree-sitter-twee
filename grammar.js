module.exports = grammar({
  name: "twee",
  
  rules: {
	story: $ => repeat($.passage),
		
	passage: $ => seq(
		$.heading,
		$._body
	),
	
	_body: $ => choice(
		$.json,
		$.prose
	),
	
	prose: $ => prec.right(seq(
		repeat1($._prose_part)
	)),
	
	_prose_part: $ => choice(
		/.|\n/,
		$.link
	),
	
	heading: $ => seq(
		"::",
		$.name,
		optional($.tags),
		optional($.inline_json),
		"\n"
	),
	
	link: $ => seq(
		"[[",
		$.label,
		$.separator,
		$.dest,
		"]]"
	),
	
	tags: $ => seq(
		"\[",
		repeat($.tag),
		"\]"
	),
	
	json: $ => seq(
		"{",
		$._json_part,
		"}"
	),
	
	_json_part: $ => repeat1(choice(
		/[^{}]+/,
		seq("{", $._json_part, "}")
	)),
	
	inline_json: $ => seq(
		"{",
		$._inline_json_part,
		"}"
	),
	
	_inline_json_part: $ => repeat1(choice(
		/[^{}\n]+/,
		seq("{", $._json_part, "}")
	)),
	
	separator: $ => /->|\|/,
	label: $ => /[^ -]([^-]|-[^>]|\.)*([^ ->]|\.)|[^>]/,
	name: $ => /[^{\[\n ][^{\[\n]*[^{\[\n ]|[^{\[\n ]/,
	dest: $ => /[^\] ][^\]]*[^\] ]|[^\] ]/,
	tag: $ => /[a-z0-9]+/
  }
});

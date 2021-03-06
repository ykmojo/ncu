<?php
//temp code to automate switching of newsletter identification language for 2018 year end fundraising
$start_fund_date = "2018-12-06";
$end_fund_date = "2018-12-31";
$start_date_comp = strtotime($start_fund_date);
$end_date_comp = strtotime($end_fund_date);
$head_date_comp = strtotime($headlines_date);

if($head_date_comp >= $start_date_comp && $head_date_comp <= $end_date_comp) {
    $its_time = true;
}
else {
    $its_time = false;
}
//end temp code

//The else part of the if/else block is the normal text.

if($its_time) {
    switch($headlines_type) {
        case "econundrums_new":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 25px !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\"><em>Econundrums</em> is brought to you by <em>Mother Jones</em>. We're a reader-supported nonprofit, and December is our most important fundraising month. If you value the reporting you get from us, please <a style=\"color:#ff6900;\" href=\"https://www.motherjones.com/media/2018/12/facebook-propaganda-trump/?list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">read more</a> about our business model and our priorities heading into 2019 and <a style=\"color:#ff6900;\" href=\"https://secure.motherjones.com/fnx/?action=SUBSCRIPTION&b_country=United+States&pub_code=DON&term_pub=DON&list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">join us with a tax-deductible, year-end donation today</a>.</p>";
            break;
        case "in_the_mix_new":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\"><em>In the Mix</em> is brought to you by <em>Mother Jones</em>. We're a reader-supported nonprofit, and December is our most important fundraising month. If you value the reporting you get from us, please <a style=\"color:#ff6900;\" href=\"https://www.motherjones.com/media/2018/12/facebook-propaganda-trump/?list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">read more</a> about our business model and our priorities heading into 2019 and <a style=\"color:#ff6900;\" href=\"https://secure.motherjones.com/fnx/?action=SUBSCRIPTION&b_country=United+States&pub_code=DON&term_pub=DON&list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">join us with a tax-deductible, year-end donation today</a>.</p>";
            break;
        case "political_mojo_new":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\"><em>Political MoJo</em> is brought to you by <em>Mother Jones</em>. We're a reader-supported nonprofit, and December is our most important fundraising month. If you value the reporting you get from us, please <a style=\"color:#ff6900;\" href=\"https://www.motherjones.com/media/2018/12/facebook-propaganda-trump/?list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">read more</a> about our business model and our priorities heading into 2019 and <a style=\"color:#ff6900;\" href=\"https://secure.motherjones.com/fnx/?action=SUBSCRIPTION&b_country=United+States&pub_code=DON&term_pub=DON&list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">join us with a tax-deductible, year-end donation today</a>.</p>";
            break;
        case "food_for_thought_redesign":
            $newsletter_info = "<p class=\"ad_text\" style=\"font-family:Georgia, serif; font-size: 12px; color: #000;text-align:center;font-size: 16px; line-height: 21px;\"><em>Food for Thought</em> is brought to you by <em>Mother Jones</em>. We're a reader-supported nonprofit, and December is our most important fundraising month. If you value the reporting you get from us, please <a style=\"color:#ff6900;\" href=\"https://www.motherjones.com/media/2018/12/facebook-propaganda-trump/?list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">read more</a> about our business model and our priorities heading into 2019 and <a style=\"color:#ff6900;\" href=\"https://secure.motherjones.com/fnx/?action=SUBSCRIPTION&b_country=United+States&pub_code=DON&term_pub=DON&list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">join us with a tax-deductible, year-end donation today</a>.</p>";
            break;
        case "breaking_news":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\">This news alert comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "trumpocracy":
            $newsletter_info = "<p class=\"ad_text\" style=\"font-family:Georgia, serif; font-size: 12px; color: #000;text-align:center;font-size: 16px; line-height: 21px;\"><em>The Russian Connection</em> is brought to you by <em>Mother Jones</em>. We're a reader-supported nonprofit, and December is our most important fundraising month. If you value the reporting you get from us, please <a style=\"color:#ff6900;\" href=\"https://www.motherjones.com/media/2018/12/facebook-propaganda-trump/?list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">read more</a> about our business model and our priorities heading into 2019 and <a style=\"color:#ff6900;\" href=\"https://secure.motherjones.com/fnx/?action=SUBSCRIPTION&b_country=United+States&pub_code=DON&term_pub=DON&list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">join us with a tax-deductible, year-end donation today</a>.</p>";
            break;
        case "recharge":
            $newsletter_info = "<p class=\"ad_text\" style=\"font-family:Georgia, serif; font-size: 12px; color: #000;text-align:center;font-size: 16px; line-height: 21px;\"><em>Recharge</em> is brought to you by <em>Mother Jones</em>. We're a reader-supported nonprofit, and December is our most important fundraising month. If you value the reporting you get from us, please <a style=\"color:#ff6900;\" href=\"https://www.motherjones.com/media/2018/12/facebook-propaganda-trump/?list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">read more</a> about our business model and our priorities heading into 2019 and <a style=\"color:#ff6900;\" href=\"https://secure.motherjones.com/fnx/?action=SUBSCRIPTION&b_country=United+States&pub_code=DON&term_pub=DON&list_source=7H8CNF00&term=XX.1.50.00.DON.D.0.18025\">join us with a tax-deductible, year-end donation today</a>.</p>";
            break;
        default:
            break;
    }
}
else {
    switch($headlines_type) {
        case "econundrums_new":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\"><em>Econundrums</em> comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "in_the_mix_new":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\"><em>In the Mix</em> comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "political_mojo_new":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\"><em>Political MoJo</em> comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "food_for_thought_redesign":
            $newsletter_info = "<p class=\"ad_text\" style=\"font-family:Georgia, serif; font-size: 12px; color: #000;text-align:center;font-size: 16px; line-height: 21px;\"><em>Food for Thought</em> comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "breaking_news":
            $newsletter_info = "<p class=\"ad_text\" style=\"margin: 20px 0 !important; padding: 0; font-family: Verdana, sans-serif; font-size: 14px; color: #000;\">This news alert comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "trumpocracy":
            $newsletter_info = "<p class=\"ad_text\" style=\"font-family:Georgia, serif; font-size: 12px; color: #000;text-align:center;font-size: 16px; line-height: 21px;\"><em>The Russian Connection</em> comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        case "recharge":
            $newsletter_info = "<p class=\"ad_text\" style=\"font-family:Georgia, serif; font-size: 12px; color: #000;text-align:center;font-size: 16px; line-height: 21px;\"><em>Recharge</em> comes to you from <em>Mother Jones</em>, an award-winning, investigative journalism outlet that was founded as a nonprofit magazine in 1976.</p>";
            break;
        default:
            break;
    }
}

/*--- Newsletters footer section ---*/
//else block is the regular footer
if($its_time) {
//Only for The Russian Connection
$trumpocracy_footer = <<<TRUMPFOOT
<table align="center" style="margin:0 auto;width:450px;max-width:450px;">
	<tr>
		<td class="no_top_pad" style="padding: 0;text-align:center;" align="center">
			<a href="https://secure.actblue.com/donate/motherjones?refcode=7HEGNF00&amount=50.00&recurring=0"><img class="news_donate" src="https://s3.amazonaws.com/mjassets/newsletters/images/20180220_donate.png" alt="Donate" style="width:150px;min-width:100px;" width="150" hspace="15" vspace="0" /></a>
		</td>
	</tr>
	<tr>
		<td align="center" style="margin-top: 15px;text-align:center;">
			<a href="https://www.motherjones.com"><img src="http://assets.motherjones.com/newsletters/newsletter_test/mojo_logo_btm_bw.png" style="width:300px;max-width: 300px;margin: 20px auto;" width="300" /></a>
		</td>
	</tr>
</table>
TRUMPFOOT;

//Global footer for all newsletters except The Russian Connection
$global_footer = <<<FOOTER
<table align="center" style="width:100%;">
	<tr>
		<td align="center">
			<!--[if (gte mso 9)|(IE)]><br /><![endif]-->
			$newsletter_info
		</td>
	</tr>
	<tr>
		<td align="center">
			<table align="center" style="margin:0 auto;width:450px;max-width:450px;">
				<tr>
					<td class="no_top_pad" style="padding: 0;text-align:center;" align="center">
							<a href="https://secure.actblue.com/donate/motherjones?refcode=7HEGNF00&amount=50.00&recurring=0"><img class="news_donate" src="https://s3.amazonaws.com/mjassets/newsletters/images/20180220_donate.png" alt="Donate" style="width:150px;min-width:100px;"  width="150" hspace="15" vspace="0" /></a>
					</td>
				</tr>
				<tr>
					<td align="center" style="margin-top: 15px;text-align:center;">
						<a href="https://www.motherjones.com><img src="http://assets.motherjones.com/newsletters/newsletter_test/mojo_logo_btm_bw.png" style="width:300px;max-width: 300px;margin: 10px auto;" width="300" /></a>
					</td>
				</tr>
			</table>
		</td>
	</tr>
</table>
FOOTER;
}
else {
//Only for The Russian Connection
$trumpocracy_footer = <<<TRUMPFOOT
<table align="center" style="margin:0 auto;width:450px;max-width:450px;">
	<tr>
		<td class="no_top_pad" style="padding: 0;text-align:center;" align="center">
			<a href="https://secure.actblue.com/donate/motherjones?refcode=7HEGNF00&amount=50.00&recurring=0"><img class="news_donate" src="https://s3.amazonaws.com/mjassets/newsletters/images/20180220_donate.png" alt="Donate" style="width:150px;min-width:100px;" width="150" hspace="15" vspace="0" /></a>
		</td>
		<td style="padding: 0;text-align:center;" align="center">
			<a href="https://s3.amazonaws.com/mjassets/newsletters/images/20180220_suscribe_2.png" alt="Subscribe to Mother Jones" style="width:150px;min-width:100px;margin-top: 10px;margin-bottom:10px;" width="150" hspace="15" vspace="0" /></a>
		</td>
	</tr>
	<tr>
		<td align="center" style="margin-top: 15px;text-align:center;" colspan="2">
			<a href="https://www.motherjones.com"><img src="http://assets.motherjones.com/newsletters/newsletter_test/mojo_logo_btm_bw.png" style="width:300px;max-width: 300px;margin: 20px auto;" width="300" /></a>
		</td>
	</tr>
</table>
TRUMPFOOT;

//Global footer for all newsletters except The Russian Connection
$global_footer = <<<FOOTER
<table align="center" style="width:100%;">
	<tr>
		<td align="center">
			<!--[if (gte mso 9)|(IE)]><br /><![endif]-->
			$newsletter_info
		</td>
	</tr>
	<tr>
		<td align="center">
			<table align="center" style="margin:0 auto;width:450px;max-width:450px;">
				<tr>
					<td class="no_top_pad" style="padding: 0;text-align:center;" align="center">
							<a href="https://secure.actblue.com/donate/motherjones?refcode=7HEGNF00&amount=50.00&recurring=0"><img class="news_donate" src="https://s3.amazonaws.com/mjassets/newsletters/images/20180220_donate.png" alt="Donate" style="width:150px;min-width:100px;"  width="150" hspace="15" vspace="0" /></a>
					</td>
					<td style="padding: 0;text-align:center;" align="center">
						<a href="https://s3.amazonaws.com/mjassets/newsletters/images/20180220_suscribe_2.png" alt="Subscribe to Mother Jones" style="width:150px;min-width:100px;margin-top: 10px;margin-bottom:10px;" width="150" hspace="15" vspace="0" /></a>
					</td>
				</tr>
				<tr>
					<td align="center" style="margin-top: 15px;text-align:center;" colspan="2">
						<a href="https://www.motherjones.com><img src="http://assets.motherjones.com/newsletters/newsletter_test/mojo_logo_btm_bw.png" style="width:300px;max-width: 300px;margin: 10px auto;" width="300" /></a>
					</td>
				</tr>
			</table>
		</td>
	</tr>
</table>
FOOTER;
}
?>
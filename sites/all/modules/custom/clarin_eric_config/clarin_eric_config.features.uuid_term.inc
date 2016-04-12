<?php
/**
 * @file
 * clarin_eric_config.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function clarin_eric_config_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Centre Assessment Committee',
    'description' => '<p>The Centre Assessment Committtee (CAC) is a permanent Committee that reports to the Board of Directors (BoD).&nbsp;<span style="line-height: 1.6em;">Its main responsibility is to assess the level and quality of CLARIN Centres of type A, B and E, as described in the Centre Types Document.&nbsp;</span></p>

<p><span style="line-height: 1.6em;">Its main tasks are:</span></p>

<ul>
	<li>to assess the quality of candidate centres of <a href="/node/3542">type A, B and E</a>;</li>
	<li>to regularly assess the quality of centres that have been recognized as type A, B or E centres;</li>
	<li>to maintain the set of centre requirements and adapt them to new developments within or outside CLARIN;</li>
	<li>to advise the Board of Directors on the content of Service Level Agreements to be concluded with the centres;</li>
	<li>to advise the Board of Directors on requirements and recognition procedures for other types of centres;</li>
	<li>to advise the Board of Directors on any issues deemed relevant for maintaining the quality of the services provided by the CLARIN infrastructure.</li>
</ul>

<p><span style="line-height: 1.6em;"><a href="/node/3767">Assessment of a centre</a> can take place</span></p>

<ul>
	<li>in the case of a new candidate centre&nbsp; on the basis of a request submitted to the BoD by the national coordinator;</li>
	<li>in the case of existing centres on the basis of a request by the head of the centre;</li>
	<li>in the case of existing centres on the CAC’s own initiative.</li>
</ul>

<p><span style="line-height: 1.6em;">The draft assessment report is sent to the BoD, and to the head of the centre with a request for comments, together with recommendations for further action. CAC members cannot participate in the assessment of their own centre other than by providing information on the request of the chair.</span></p>

<p>Every year the CAC prepares an overview of the state of the centres for the General Assembly to be submitted to the BoD one month before the GA meeting takes place.</p>

<p>All relevant documents for the Centre Assessment Committee <a href="/node/3573">are available here</a>.</p>
',
    'format' => 'safe_html',
    'weight' => 6,
    'uuid' => '04ec4efe-778d-4846-9bdd-260c4650f5b4',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Board of Directors',
    'description' => '<p>The Board of Directors (BoD) is responsible for the day-to-day management of CLARIN ERIC and for the implementation of the strategies and policies set out by the General Assembly. The BoD consists of five members: the Executive Director (Steven Krauwer, Utrecht University), the Vice Executive Director (Bente Maegaard, University of Copenhagen), the Chair of the National Coordinators Forum (Erhard Hinrichs, University of Tübingen), the Director for User Involvement (Martin Wynne, Oxford University)&nbsp;and the Technical Director (Dieter Van Uytvanck, CLARIN ERIC).&nbsp;</p>

<p>&nbsp;</p>
',
    'format' => 'safe_html',
    'weight' => 3,
    'uuid' => '260f1449-174c-4942-9852-0b8ac02bbb12',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Standing Committee for CLARIN Technical Centres',
    'description' => '<p>The Standing Committee for CLARIN Technical Centres (SCCTC) is a permanent Committee that reports to the Board of Directors. Its main responsibility is to ensure consistence, coherence and stability of infrastructure services through decisions on implementation as well as coordination between the centres and members.</p>

<p><span style="line-height: 1.6em;">Its main tasks are:</span></p>

<ul>
	<li>to serve as a forum for CLARIN centres to exchange ideas and experiences</li>
	<li>to coordinate between CLARIN centres by&nbsp; discussing and agreeing on measures needed for the implementation of the CLARIN technical infrastructure</li>
	<li>to review and <a href="http://hdl.handle.net/1839/00-DOCS.CLARIN.EU-77">update the Centre Types Document</a> which was produced in the CLARIN Preparatory Phase</li>
	<li>to interact with the Centre Assessment Committee on relevant issues</li>
	<li>to advise the Board of Directors and the National Coordinators’ Forum on any issues deemed relevant for maintaining the quality of the services provided by the CLARIN technical infrastructure.</li>
</ul>

<p><span style="line-height: 1.6em;">Every year the SCCTC prepares an overview of the state of the technical infrastructure services for the General Assembly.</span></p>

<p>All meetings, minutes and documents of the SCCTC <a href="http://www.clarin.eu/node/3573">can be accessed here</a>.</p>
',
    'format' => 'safe_html',
    'weight' => 5,
    'uuid' => '6a1bc574-e7ec-4d94-a3e6-9de36785ade8',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Knowledge Sharing Infrastructure Committee',
    'description' => '<p>The recently (2015) formed Knowledge Sharing Infrastructure Committee (KSIC) takes care of the creation of a vivid Knowledge Sharing Infrastructure within and provided by CLARIN.&nbsp; It currently entails the assessment of proposals for K-Centres and L-Centres, and of mobility grants applications.</p>

<p>Other aspects of the KSI are being included.</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '6d7ded50-90b6-460d-bcbb-ccb4dbe20d31',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Standards Committee',
    'description' => '<p>The main responsibility of the Standards Committee is to advise the Board of Directors on the adoption of standards to be supported by CLARIN ERIC.</p>

<p>Its main tasks include:</p>

<ul>
	<li>to collect, consolidate and prepare for publication in a single place the findings and recommendations related to standards emerging from the CLARIN preparatory phase project</li>
	<li>to maintain the set of standards supported by CLARIN and adapt them to new developments within or outside CLARIN</li>
	<li>to develop and implement procedures for the discussion and adoption of new recommendations for standards</li>
	<li>to ensure harmonisation of standards between CLARIN ERIC and related initiatives, such as (but not restricted to) the META project</li>
	<li>to ensure communication with international standards bodies such as (but not restricted to) ISO</li>
	<li>to publish and promote the standards supported by CLARIN</li>
	<li>to advise the Board of Directors in all matters related to standards</li>
</ul>

<p>&nbsp;</p>
',
    'format' => 'safe_html',
    'weight' => 7,
    'uuid' => '7554d35e-c83a-4d85-b9a7-5e4bc0f20039',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'National Coordinators\' Forum',
    'description' => '<p>The National Coordinators\' Forum (NCF) is a permanent Committee that reports to the Board of Directors (BoD).&nbsp; Its main responsibility is to ensure the coordination of the implementation of the strategies laid out by the General Assembly. The Forum shall have to maintain coherence and consistency across CLARIN and collaboration between the members.</p>

<p>Its main tasks are:</p>

<ul>
	<li>to serve as a forum for CLARIN national consortia to exchange ideas and experiences</li>
	<li>to coordinate the national level implementation and exploitation of the CLARIN&nbsp; infrastructure between CLARIN national consortia</li>
	<li>to help the BoD coordinate access to existing and newly created resources, tools, and services available at the national level</li>
	<li>to help the BoD coordinate the CLARIN knowledge sharing infrastructure</li>
	<li>to advise the Board of Directors on any issues deemed relevant for the implementation and exploitation of the CLARIN infrastructure.</li>
</ul>

<p>Every year the NCF prepares an overview of the state of the national implementation of the CLARIN infrastructure for the General Assembly.</p>
',
    'format' => 'safe_html',
    'weight' => 4,
    'uuid' => 'abc883d7-ecf7-4c2e-968b-8b9162771549',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Legal Issues Committee',
    'description' => '<p>The main responsibility of the Legal Issues Committee is to advise the Board of Directors on all issues related to IPR, privacy protection and ethical matters, to be referred to below as \'legal issues\'.</p>

<p>Its main tasks include:</p>

<ul>
	<li>to collect, consolidate and prepare for publication in a single place the findings and recommendations related to legal issues emerging from the CLARIN preparatory phase project;</li>
	<li>to maintain the set of license templates supported by CLARIN and adapt them to new developments within or outside CLARIN;</li>
	<li>to develop and implement procedures for the discussion and adoption of new recommendations for dealing with legal issues;</li>
	<li>to liaise closely with the Standing Committee for CLARIN Technical Centres in order to ensure that our legal issues policy and its technical implementation are in line;</li>
	<li>to ensure harmonisation of legal policies between CLARIN ERIC and related initiatives, such as (but not restricted to) the META project and sister SSH infrastructures;</li>
	<li>to publish and promote the legal policies adopted by CLARIN;</li>
	<li>to advise the Board of Directors in all legal issues.</li>
</ul>

<p>&nbsp;</p>
',
    'format' => 'safe_html',
    'weight' => 8,
    'uuid' => 'b0e1e6dc-f7e3-4b18-b6bd-d9d80bd5642d',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'CLARIN Office',
    'description' => '<p>The CLARIN Office supports the General Assembly, the Board of Directors and other CLARIN ERIC working parties. Its premises are located at Utrecht University, although some of its members may work from other sites. At this moment it consists of Steven Krauwer, Sebastian Drude, Hetty Winkel and&nbsp;Linda Stokman.&nbsp;</p>
',
    'format' => 'safe_html',
    'weight' => 9,
    'uuid' => 'c21b7432-c358-4206-b3c9-4e13502f29fc',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'General Assembly',
    'description' => '<p>The General Assembly is the body of CLARIN ERIC with full decision-making powers, and represents the members of CLARIN ERIC. Each member has one vote. Each entity representing a member has nominated one official representative. Additionally each member may bring an expert to the GA meetings.&nbsp; The General Assembly meets at least once a year, and has the following functions:</p>

<ol style="list-style-type:lower-alpha;">
	<li>Appoint, suspend or dismiss the Executive Director and the Board of Directors apart from the ex officio members;</li>
	<li>confirm ex officio members of the Board of Directors (i.e. the Chairs of the national Coordinators Forum and the Standing Committee for CLARIN Technical Centres)</li>
	<li>appoint the Scientific Advisory Board;</li>
	<li>decide on strategies for the construction and exploitation of CLARIN and any other issues deemed relevant by the Board of Directors or by a member or group of members who requests it;</li>
	<li>approve the work programme and annual budget of CLARIN ERIC;</li>
	<li>decide at least every five years on the principles for calculating the annual fee for each member;</li>
	<li>approve annual reports and accounts of CLARIN ERIC;</li>
	<li>approve each member’s contribution to CLARIN;</li>
	<li>approve accession of new members and observers;</li>
	<li>decide on termination of membership and observer status;</li>
	<li>decide on winding up of CLARIN ERIC.</li>
</ol>

<p>Details about the role and functioning of the General Assembly can be found in the CLARIN ERIC Statutes.</p>

<p>&nbsp;</p>
',
    'format' => 'safe_html',
    'weight' => 1,
    'uuid' => 'f03c2289-27a9-4f6e-9fa3-37eaf23400ef',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Scientific Advisory Board',
    'description' => '<p>The Scientific Advisory Board (SAB) is a permanent Committee that reports to the General Assembly (GA).&nbsp; Its main responsibility is to provide input to the General Assembly through solicited and unsolicited advice on strategic issues, including but not limited to vision, new initiatives, work plans and quality assurance. &nbsp;The SAB may provide input for the General Assembly for the evaluation of the progress of the work and the services offered by CLARIN ERIC. Every year, at its annual meeting, the SAB prepares an opinion to be presented to the General Assembly.</p>

<p>Membership in the SAB is decided by the General Assembly. &nbsp;The number of members of the SAB is between five and ten, and is decided by the General Assembly. At present the SAB counts 7 members.&nbsp; The term for members of the SAB is three years, with the possibility of one more term.</p>

<p>The General Assembly appoints a chair and a vice chair for the SAB. &nbsp;The SAB meets as often as deemed necessary by the chair, normally once per year.</p>
',
    'format' => 'safe_html',
    'weight' => 2,
    'uuid' => 'f4d60732-98d2-41ef-9ddc-d0057da60f1c',
    'vocabulary_machine_name' => 'governance',
    'metatags' => array(),
  );
  return $terms;
}

<?php
/**
 * @file
 * clarin_glossary.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function clarin_glossary_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'NBN',
    'description' => 'National Bibliography Number
<br/>See: http://en.wikipedia.org/wiki/National_Bibliography_Number',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '03706518-41a5-40db-9fe9-322e9e097b40',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DSA',
    'description' => 'Data Seal of Approval
<br />See: http://www.datasealofapproval.org/
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '093d2f24-432d-4d1e-88a4-3f55a4f439e3',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SP',
    'description' => '<p>Service Provider. A Shibboleth term. Synonym for an AAI-enabled Resource, although used in a more technical sense.</p>

<p>See: <a href="http://www.clarin.eu/node/3788">Federated Identity</a></p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '0a9bd903-b841-46b7-b835-87988d3bd369',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'IdP',
    'description' => '<p>Identity Provider, a (Shibboleth) server that authenticates users and conveys their attributes to requesting resources. In other terms it provides the digital identities of its users to other servers in the AAI.</p>

<p>See: <a href="http://www.clarin.eu/node/3788">Federated Identity</a></p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '0c84530a-7bdd-4d8c-866f-dcb6d5762439',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'knowledge sharing infrastructure',
    'description' => '<p>Knowledge Sharing Infrastructure, part of the CLARIN infrastructure that takes care of sharing of knowledge and expertise, education, training and dissemination</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '0ec9a19c-a414-471f-9498-65f520cbfa99',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'LREP',
    'description' => 'Language Repository Exchange Protocol',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '119fbafc-8801-4edb-9d8d-24ead228937f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TCF',
    'description' => '<p>Text Corpus Format</p>

<p>This format is, among others, used by <a href="http://weblicht.sfs.uni-tuebingen.de">WebLicht</a>.<br>
	See: <a href="http://weblicht.sfs.uni-tuebingen.de/weblichtwiki/index.php/The_TCF_Format">http://weblicht.sfs.uni-tuebingen.de/weblichtwiki/index.php/The_TCF_Format</a><br>
	<a href="http://de.clarin.eu/en/language-resources/weblicht-en/tutorials.html">http://de.clarin.eu/en/language-resources/weblicht-en/tutorials.html</a></p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '140cc471-06f6-4757-8596-9b1b62d33106',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CAC',
    'description' => '<p>Centre Assessment Committee</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '146aae9c-9d6e-4697-956f-b76920841c28',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'OAI-ORE',
    'description' => 'Object Reuse and Exchange
<br/>See: http://www.openarchives.org/ore/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '164a8b22-03ef-46cd-b97d-27e72271b37f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'OAIS',
    'description' => 'Open Archival Information System
<br/>See: http://en.wikipedia.org/wiki/OAIS',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '1794c6b0-83b4-4e8b-bd60-466fde44d897',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SLCS',
    'description' => 'Short Lived Credential Service
<br/>See: http://www.switch.ch/grid/slcs/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '1fa70d25-1cbd-4a26-892f-d23bf6f64c3b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'LOM',
    'description' => 'Learning Object Metadata
<br/>See: http://en.wikipedia.org/wiki/Learning_object_metada',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '245ed1da-58bd-4eb2-a77f-ff624ddab63f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'WSDL',
    'description' => 'Web Services Description Language
<br/>See: http://en.wikipedia.org/wiki/Web_Services_Description_Language',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '28e507b5-7268-43bd-9573-c0721497c647',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'MT',
    'description' => '<p>Machine Translation</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '28f80ec5-394c-4241-875a-34e8f465bfcf',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TBX',
    'description' => 'Termbase Exchange format
<br/>See: http://en.wikipedia.org/wiki/Tbx#TBX',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '29323aa3-4737-419c-9ec0-f86456b754b4',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CLARA',
    'description' => 'Common Language Resources and their Applications
<br/>See: http://clara.uib.no',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '2982c50a-a8f9-4e55-ab3b-b3ddb4e4b091',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'LRT',
    'description' => '<p>Language Resources and Technology<br>
	See: http://lrt.clarin.eu/language-resources-and-technology</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '2ad0eef1-17d5-4fb7-84d0-d03770116eef',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CLARIN member',
    'description' => '<p>Country or intergovernmental organisation that participates in CLARIN <a class="lexicon-term" href="http://www.clarin.eu/glossary#ERIC" title="European Research Infrastructure Consortium

See: http://ec.europa.eu/research/infrastructures/index_en.cfm?pg=eric">ERIC</a></p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '2affd8c8-7021-41aa-8dc0-6ce8cb9db52d',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'RI',
    'description' => '<p>Research Infrastructure</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '2b3ef373-ce53-4234-92a2-33b00cf0ce1c',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'AAI',
    'description' => 'Authentication and Authorization Infrastructure<br/>
See: <a href="/node/3788">Federated Identity</a>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '2e9b4ca3-4c25-4cea-a811-9d87adc4534f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EBXML',
    'description' => 'e-business XML
<br/>See: http://en.wikipedia.org/wiki/Ebxml',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '318f4b77-dcb2-4954-a37e-ae663acc3cde',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'PARADE',
    'description' => 'Partnership for Accessing Data in Europe
<br/>See: http://www.csc.fi/english/pages/parade',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '32873eb6-894e-4b8d-a2c8-6b8b12b19bb8',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'XCES',
    'description' => 'XML Corpus Encoding Standard
<br/>See: http://www.xces.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '3a2916b9-0f29-4239-beda-a68fcb3ff5bf',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'ERA',
    'description' => 'European Research Area
<br>
See: http://en.wikipedia.org/wiki/European_Research_Area',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '3a56bc86-f0b1-458a-a655-90ee4294202d',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'NREN',
    'description' => 'National Research and Education Network
<br/>See: http://en.wikipedia.org/wiki/National_research_and_education_network',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '3e40d3b1-e133-42b0-812c-2d557fd40c73',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'NLP',
    'description' => 'Natural Language Processing<br />
See: http://en.wikipedia.org/wiki/Natural_language_processing
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '3f6049f5-3916-4507-a570-6292abdd9ad5',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'ODD',
    'description' => 'One Document Does it all
<br/>See: http://www.tei-c.org/wiki/index.php/ODD',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '3f66c6e4-1f7c-4dd2-97e7-875b2d20c5a5',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'workflow',
    'description' => '<p>A <strong>workflow</strong> consists of a <a href="http://en.wikipedia.org/wiki/Sequence" title="Sequence">sequence</a> of <a href="http://en.wikipedia.org/wiki/Chain" title="Chain">concatenated</a> (connected) steps. Emphasis is on the <em><a href="http://en.wikipedia.org/wiki/Flow" title="Flow">flow</a></em> <a href="http://en.wikipedia.org/wiki/Paradigm" title="Paradigm">paradigm</a>, where each step follows the precedent without delay or gap and ends just before the subsequent step may begin. This concept is related to non overlapping tasks of single <a href="http://en.wikipedia.org/wiki/Resource" title="Resource">resources</a>.</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '40264954-d466-4a25-8aa0-43a58203f2b2',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'Roadmap',
    'description' => '<p>Long term plan for the development of research infrastructures in Europe, prepared by <a class="lexicon-term" href="http://www.clarin.eu/glossary#ESFRI" title="European Strategy Forum for Research Infrastructures

See: http://cordis.europa.eu/esfri/">ESFRI</a></p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '45578312-35f0-4227-b82c-44336894a348',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SAML',
    'description' => 'Security Assertion Markup Language
<br/>See: http://en.wikipedia.org/wiki/SAML',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '46af66ab-ca8d-47fc-a64d-c4d4f1dac115',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'ESFRI',
    'description' => 'European Strategy Forum for Research Infrastructures
<br/>See: http://cordis.europa.eu/esfri/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '48fdf445-46ba-43ce-887c-b8cd4bed72e4',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'observer',
    'description' => '<p>Country or intergovernmental organisation that prepares itself for participation in CLARIN <a class="lexicon-term" href="http://www.clarin.eu/glossary#ERIC" title="European Research Infrastructure Consortium

See: http://ec.europa.eu/research/infrastructures/index_en.cfm?pg=eric">ERIC</a></p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '4b24d4dd-2987-4330-a3e7-70fb4b248790',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EAD',
    'description' => 'Encoded Archival Description
<br/>See: http://en.wikipedia.org/wiki/Encoded_Archival_Description',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '4f31496d-baef-4291-84aa-3ccaf875f4a2',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EPPN',
    'description' => 'EduPersonPrincipleName
<br/>See: http://rnd.feide.no/attribute/edupersonprincipalname',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '51794dec-f46a-4f3c-88a5-239015d728cb',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'PKI',
    'description' => 'Public Key Infrastructure
<br/>See: http://en.wikipedia.org/wiki/Public_key_infrastructure',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '5639ada9-bf7f-4c6c-8448-328fa1cfc8ef',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CMDI',
    'description' => 'Component Metadata Infrastructure
<br/>See: http://www.clarin.eu/cmdi',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '57bcfd0c-5363-40c3-a499-f0cd3c4fcd5b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DANS',
    'description' => 'Data Archiving and Networked Services
<br/>See: http://www.dans.knaw.nl',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '59b25d27-6c4e-4837-895a-8a98bdb1ce1d',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'API',
    'description' => 'Application Programming Interface
<br />See: http://en.wikipedia.org/wiki/API',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '5af4c880-70bb-4f00-8af5-1dd9ef56c3b3',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'MODS',
    'description' => 'Metadata Object Description Schema
<br/>See: http://en.wikipedia.org/wiki/MODS',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '5cb53ae5-179c-43ce-b5ce-660e333e52b4',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'UDDI',
    'description' => 'Universal Description Discovery and Integration
<br/>See: http://en.wikipedia.org/wiki/UDDI',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '5fb1cd82-29d0-43c7-9a2f-4ec099cd5266',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'Social Sciences',
    'description' => '<p>Study of society and human nature</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '632b0b77-2987-4f2c-8776-21b3ade378a1',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DOI',
    'description' => 'Digital Object Identifier
<br/>See: http://www.doi.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '65be1ed7-d488-427e-9bdb-6006127d39d0',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'KSI',
    'description' => '<p>Knowledge Sharing Infrastructure, part of the CLARIN infrastructure that takes care of sharing of knowledge and expertise, education, training and dissemination</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '65e91b1c-e299-40eb-b018-74a6608de2d5',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'GA',
    'description' => '<p>General Assembly</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '6640065f-ce91-4024-a5cd-b86849b57bae',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'RDA',
    'description' => 'Research Data Alliance
<br/> See: http://www.rd-alliance.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '6785711d-735f-4024-ab73-23ba37368df1',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'Showcases',
    'description' => '<p>Fully implemented solutions that demonstrate how the CLARIN infrastructure can be used to support humanities and social sciences research</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '67a8a008-e9d9-4b76-bcaf-1c8744dd020a',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'ARK',
    'description' => 'Archival Resource Key
<br/>See: http://www.cdlib.org/inside/diglib/ark/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '67b31800-ed41-465b-8e9f-c14e3ee06c3a',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DIP',
    'description' => 'Dissemination Information Package',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '697b1a22-da8a-4db1-8a51-34100ac1fa03',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DRIVER',
    'description' => 'Digital Repository Infrastructure Vision for European Research
<br/>See: http://www.driver-repository.eu/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '697f8702-8a3a-475c-9a8d-cde6864db046',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'LMF',
    'description' => 'Lexical Markup Framework
<br/>See: http://en.wikipedia.org/wiki/Lexical_Markup_Framework',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '699b2594-db9f-4e2b-bb77-1dd8106c7be0',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'NCF',
    'description' => '<p>National Coordinators Forum</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '6cc84e31-275c-4444-ba01-69575a5886bc',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'JISC',
    'description' => 'Joint Information Systems Committee
<br/>See: http://www.jisc.ac.uk/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '6f73b2bd-2bd6-44cc-b63c-dced98410be2',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SRU',
    'description' => 'Search/Retrieve via URL
<br/>See: http://en.wikipedia.org/wiki/Search/Retrieve_via_URL',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '766e85ec-0e15-4957-a9fd-c584ad683338',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'IMPACT',
    'description' => 'Improving Access to Text
EU Project, http://www.impact-project.eu/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '78ed1dfa-f680-4746-8920-a711e419c92f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'iCORDI',
    'description' => 'International Collaboration on Research Data Infrastructure
<br/>See: http://www.icordi.eu',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '7b2957e7-58c6-4862-b31a-6c13e0372835',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TCS',
    'description' => 'TERENA Certificate Service<br>
See: https://www.terena.org/activities/tcs/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '7b91056b-5389-4a90-a8fd-5ac3e2c1250a',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DCR',
    'description' => 'Data Catagory Registry
<br/>See: http://www.isocat.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '7de0bfc5-4abb-4503-bf0d-a4d3ab6d0f50',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'legal issues committee',
    'description' => '<p>Committee dealing with access rights, IPR, Service Provider Federation, ethical issues</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '805fb1e2-bbb1-458f-a749-58a3fe1fe5e6',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EAF',
    'description' => 'Eudico Annotation Format. File format used by ELAN.
<br>
See: http://www.mpi.nl/tools/elan/EAF_Annotation_Format.pdf',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '818a17ce-2a3b-47b0-97ad-d79e8eb05f15',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'WDS',
    'description' => 'World Data System
<br/>See: http://icsu-wds.org',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '8433cde1-68d0-4192-a680-9d75837833f8',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'VLO',
    'description' => 'Virtual Language Observatory
<br/>See: http://www.clarin.eu/vlo',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '86ff9958-d118-4c05-a25e-4ce814cb8144',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DEISA',
    'description' => 'Distributed European Infrastructure for Supercomputing Applications
<br/>See: http://www.deisa.eu/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '8998f4df-30e0-4dcb-9cae-10ba8bbafb3e',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EUDAT',
    'description' => 'European Data Infrastructure
<br/>See: http://www.eudat.eu/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '8b748f8f-e373-4f88-97cb-92e63b3b67ea',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EGEE',
    'description' => 'Enabling Grids for E-sciencE
<br />See: http://en.wikipedia.org/wiki/Enabling_Grids_for_E-sciencE',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '8c229ec8-e67a-4c2b-ba06-8ea2033f8779',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SCCTC',
    'description' => '<p>Standing Committee for CLARIN Technical Centres</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '8d58920d-21ef-442f-8661-546a1f78bdd4',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CLARIAH',
    'description' => '<p>The joint infrastructure for the&nbsp;Netherlands for&nbsp;CLARIN and DARIAH starting in 2015, succeeding CLARIN-NL.</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '94f3dba9-8dce-4869-94b8-9c8a896a3e3d',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SRW',
    'description' => 'Search/Retrieve Web Service
<br/>See: http://en.wikipedia.org/wiki/Search/Retrieve_Web_Service',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '98b4f539-34a0-478c-bdcd-2cd91d879c57',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TERENA',
    'description' => 'Trans-European Research and Education Networking Association
<br/>See: http://www.terena.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '9978ea59-328e-41c8-9d5e-15c4e9886e9b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TDS',
    'description' => 'Typological Database System
<br/>See: http://www.hum.uva.nl/TDS/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => '9a75349e-db40-40c9-b3a5-f1f0a0d8c650',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'FEDORA',
    'description' => 'Flexible Extensible Digital Object Repository Architecture
<br/>See: http://en.wikipedia.org/wiki/Fedora_%28software%29',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'a062107d-636c-4d70-b068-2641803baa2e',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SCHAC',
    'description' => 'SChema Harmonisation Committee
<br/>See: http://www.terena.org/activities/tf-emc2/schac.html',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'a1227c9d-75eb-4b0b-a1d7-df1a0137a130',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DASISH',
    'description' => 'Digital Services Infrastructure for Social Sciences and Humanities
<br/>See: http://www.dasish.eu',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'aae7bddb-bef5-4af2-af1f-8d67da8e556c',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'RADIUS',
    'description' => 'Remote Authentication Dial In User Service
<br/>See: http://en.wikipedia.org/wiki/RADIUS',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b1488ae6-8a19-408f-83e3-7ce11cab7014',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TEI',
    'description' => 'Text Encoding Initiative
<br/>See: http://en.wikipedia.org/wiki/Text_Encoding_Initiative',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b2247456-e106-4830-83b9-8fa4f2f4efd0',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SOA',
    'description' => 'Service-oriented architecture
<br/>See: http://en.wikipedia.org/wiki/Service-oriented_architecture',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b2aa870e-7edd-41f2-b052-febc5fe2867b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'APA',
    'description' => '<p>Alliance for Permanent Access<br>
	See: http://www.alliancepermanentaccess.eu</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b35ae37f-d14a-4556-84ca-eb11dc4b5ac1',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'WADL',
    'description' => 'Web Application Description Language
<br/>See: http://en.wikipedia.org/wiki/Web_Application_Description_Language',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b3a2a046-ed32-4dd7-9470-d7e0d67b4a0c',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CLARIN PP',
    'description' => '<p>CLARIN Preparatory Phase Project (2008-11)</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b3b44b80-c449-4579-8221-4327544e287f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'WS-Security',
    'description' => 'Web Services Security
<br/>See: http://en.wikipedia.org/wiki/WS-Security',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'b7ecd82d-1836-4cf0-8eca-386bbecb605e',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'technical infrastructure',
    'description' => '<p>Part of the CLARIN infrastructure that hosts data and services, and that interconnects them in order to ensure integrated access</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'bac89129-9712-40d0-8fcc-d847a27c6639',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'INTERA',
    'description' => 'Integrated European language data Repository Area
<br/>See: http://www.mpi.nl/intera/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'c3938675-ce74-451d-89ee-aeabd46b779a',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'OAI-PMH',
    'description' => 'Open Archives Initiative Protocol for Metadata Harvesting
<br/>See: http://en.wikipedia.org/wiki/Open_Archives_Initiative_Protocol_for_Metadata_Harvesting',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'c765d2d0-38df-4f0c-9efc-cadd46a1e120',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'FIDAS',
    'description' => 'Fieldwork Data Sustainability
<br/>See: http://www.apsr.edu.au/fidas/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'c8cfd36e-37a5-4211-b677-3e5887a3a7a0',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'URN',
    'description' => 'Uniform Resource Name
<br/>See: http://en.wikipedia.org/wiki/Uniform_Resource_Name',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'ca1db34f-8ddc-4659-b922-42a62fe25c35',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'TACAR',
    'description' => 'TERENA Academic CA Repository
<br/>See: http://www.tacar.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'cefae9c3-add9-4422-9e28-418c1c30a4e1',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SOAP',
    'description' => 'Simple Object Access Protocol
<br/>See: http://en.wikipedia.org/wiki/SOAP_(protocol)',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'cf8006a6-786e-4be5-bc0f-d6a264056e86',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'METS',
    'description' => 'Metadata Encoding and Transmission Standard
<br/>See: http://en.wikipedia.org/wiki/METS',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd39f2522-d708-420e-ba9a-5ae0f461be1b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CLARIN Office',
    'description' => '<p>CLARIN administrative headquarters at Utrecht University</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd4d51572-c29d-4484-a43c-523071c00af7',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'CESSDA',
    'description' => 'Council of European Social Science Data Archives
<br/>See: http://www.cessda.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd56da969-cfd2-40ee-be34-c2a21c0e247c',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'UNICORE',
    'description' => 'UNiform Interface to COmputing REsources
<br/>See: http://en.wikipedia.org/wiki/UNICORE',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd62065c2-5363-4969-a77c-fb61eda09f02',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DC',
    'description' => 'Dublin Core
<br/>See: http://dublincore.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd64a768d-09cd-4b01-a1ed-baeba9b43c9f',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'National Consortium',
    'description' => '<p>CLARIN <a class="lexicon-term" href="http://www.clarin.eu/glossary#ERIC" title="European Research Infrastructure Consortium

See: http://ec.europa.eu/research/infrastructures/index_en.cfm?pg=eric">ERIC</a> working unit at the national level</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd7a88f3a-7fe7-446b-bb58-332ee2a90d76',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'Standards committee',
    'description' => '<p>Committee dealing with standards and standards strategies in CLARIN</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd86c6884-3a90-4151-85db-1e5cacee1e3b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DIDL',
    'description' => 'Digital Item Declaration Language
<br/>See: http://en.wikipedia.org/wiki/Digital_Item_Declaration_Language',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'd95df0b5-f56a-474e-b65f-3078ba684da1',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'PID',
    'description' => 'Persistent Identifier',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'da32085f-607e-4aa7-9248-1644b6f0d555',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'ERIC',
    'description' => 'European Research Infrastructure Consortium
<br>See: http://ec.europa.eu/research/infrastructures/index_en.cfm?pg=eric',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'dd7335cb-6940-4add-916c-4455698cb059',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'LAMUS',
    'description' => 'Language Archive Management and Upload System
<br/>See: http://www.lat-mpi.eu/tools/lamus',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'de694c7a-078c-4386-8064-6b41614eb539',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'IMDI',
    'description' => 'ISLE Meta Data Initiative
<br/>See: http://en.wikipedia.org/wiki/IMDI',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'e0ce6d5a-ded8-427a-ab69-5fd3f9d36241',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'OLAC',
    'description' => 'Open Language Archives Community
<br/>See: http://www.language-archives.org',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'e632c5fb-03b1-400e-9447-88041788fd7a',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'LDAP',
    'description' => 'Lightweight Directory Access Protocol
<br/>See: http://en.wikipedia.org/wiki/Ldap',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'e6c4647c-37c9-40ae-aeae-af3b4ab8ca2b',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'EPIC',
    'description' => 'European Persistent Identifier Consortium
<br/>See: http://www.pidconsortium.eu/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'e74c7a9f-25a1-443e-b17b-20fcbaf9a4f3',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SAB',
    'description' => '<p>Scientific Advisory Board</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'e857a2f0-bd31-44ae-8bd6-0e6507aecae7',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DARIAH',
    'description' => 'Digital Research Infrastructure for the Arts and Humanities
<br/>See: http://www.dariah.eu/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'ec4b663f-167d-4e0a-aa5c-418409fa45ff',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'REST',
    'description' => 'Representational State Transfer
<br/>See: http://en.wikipedia.org/wiki/REST',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'f5fa1961-1eb6-47f8-a910-946959acd481',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'OASIS',
    'description' => 'Organization for the Advancement of Structured Information Standards
<br/>See: http://www.oasis-open.org/',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'f6526597-c56b-4479-8276-8025c9037354',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'META-SHARE',
    'description' => '<p>Network of repositories resulting from the META-NET Network of Excellence (<a href="http://www.meta-share.eu/">http://www.meta-share.eu/</a>)</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'f7dae4a1-af61-4a67-8714-48bcc9e6d0c8',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'DOBES',
    'description' => 'Dokumentation Bedrohter Sprachen
<br/>See: http://www.mpi.nl/dobes',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'f98d120b-4718-4474-86cc-9a38be8afe0d',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'BoD',
    'description' => '<p>Board of Directors</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'fb2077ac-c589-4004-a7dc-1bc0cc4c1426',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'SRB',
    'description' => 'Storage Resource Broker
<br/>See: http://en.wikipedia.org/wiki/Storage_Resource_Broker',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'fd0da23c-307d-4ba9-9ed0-0568a7d54183',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'single sign-on',
    'description' => '<p>Access to multiple systems by logging in once</p>
',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'fd7d3cc4-0c8c-4952-85cf-9f62ee118176',
    'vocabulary_machine_name' => 'glossary',
  );
  $terms[] = array(
    'name' => 'XML-RPC',
    'description' => 'XML Remote Procedure Call
<br>See: http://en.wikipedia.org/wiki/Xml-rpc',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'ff621bdb-ed08-4823-9571-e60851e93c47',
    'vocabulary_machine_name' => 'glossary',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'ISO/TC 37',
    'description' => 'Terminology and other language and content resources
<br/>See: http://en.wikipedia.org/wiki/ISO/TC37',
    'format' => 'safe_html',
    'weight' => 0,
    'uuid' => 'ffb7c3a0-b846-4135-9da8-43e26a0b2e5b',
    'vocabulary_machine_name' => 'glossary',
  );
  variable_set('uuid_features_file_types', array());
  variable_set('uuid_features_file_mode', 'inline');
  variable_set('uuid_features_file_assets_path', '');
  variable_set('uuid_features_file_supported_fields', 'file, image');
  return $terms;
}

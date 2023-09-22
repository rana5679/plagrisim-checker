{"payload":{"allShortcutsEnabled":true,"fileTree":{"CSproj 2":{"items":[{"name":"Document.cpp","path":"CSproj 2/Document.cpp","contentType":"file"},{"name":"Document.h","path":"CSproj 2/Document.h","contentType":"file"},{"name":"PlagiarismChecker.cpp","path":"CSproj 2/PlagiarismChecker.cpp","contentType":"file"},{"name":"PlagiarismChecker.h","path":"CSproj 2/PlagiarismChecker.h","contentType":"file"},{"name":"main.cpp","path":"CSproj 2/main.cpp","contentType":"file"}],"totalCount":5},"":{"items":[{"name":"CS2_PlagiarismChecker","path":"CS2_PlagiarismChecker","contentType":"directory"},{"name":"CSproj 2","path":"CSproj 2","contentType":"directory"},{"name":"CS Project Report.pdf","path":"CS Project Report.pdf","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"UML.jpg","path":"UML.jpg","contentType":"file"}],"totalCount":5}},"fileTreeProcessingTime":10.681382,"foldersToFetch":[],"reducedMotionEnabled":"system","repo":{"id":636219966,"defaultBranch":"main","name":"CS2PROJ-milestone2","ownerLogin":"HayaShalaby","currentUserCanPush":true,"isFork":false,"isEmpty":false,"createdAt":"2023-05-04T14:18:18.000+03:00","ownerAvatar":"https://avatars.githubusercontent.com/u/124674435?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1684022674.5493991","canEdit":true,"refType":"branch","currentOid":"fbbb919dd4623b4cb66c69defa7f8cbb344aa9a4"},"path":"CSproj 2/Document.cpp","currentUser":{"id":124688927,"login":"rana5679","userEmail":"ranataher@aucegypt.edu"},"blob":{"rawLines":["#include \"Document.h\"","#include <vector>","#include <iostream>","using namespace std;","","Document::Document() {","  fileName = \"\";","  numOflines = 0;","}","","Document::Document(string FN) {","  setFileName(FN);","  setLines(FN);","}","","void Document::setFileName(string FN) { fileName = FN; }","","void Document::setLines(string FN) {","  fstream file;","  file.open(FN);","  string temp;","  while (!file.eof()) {","    getline(file, temp, '.');","    lines.push_back(temp);","  }","  //cout << lines.size()-1 << endl;","}","","void Document::addLine(string sentence) {","  lines.push_back(sentence);","","}","","string Document::getFileName() { return fileName; }","","vector<string> Document::getLines() { return lines; }","","int Document::numOfLines()","{","    double L=lines.size();","    return L;","    ","}"],"stylingDirectives":[[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":21,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":20,"end":21,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":16,"end":17,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":15,"cssClass":"pl-k"},{"start":16,"end":19,"cssClass":"pl-en"},{"start":19,"end":20,"cssClass":"pl-k"}],[],[{"start":0,"end":18,"cssClass":"pl-en"}],[{"start":13,"end":15,"cssClass":"pl-s"},{"start":13,"end":14,"cssClass":"pl-pds"},{"start":14,"end":15,"cssClass":"pl-pds"}],[{"start":15,"end":16,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":18,"cssClass":"pl-en"}],[{"start":2,"end":13,"cssClass":"pl-c1"}],[{"start":2,"end":10,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":5,"end":26,"cssClass":"pl-en"}],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":5,"end":23,"cssClass":"pl-en"}],[],[{"start":7,"end":11,"cssClass":"pl-c1"}],[],[{"start":2,"end":7,"cssClass":"pl-k"},{"start":15,"end":18,"cssClass":"pl-c1"}],[{"start":4,"end":11,"cssClass":"pl-c1"},{"start":24,"end":27,"cssClass":"pl-s"},{"start":24,"end":25,"cssClass":"pl-pds"},{"start":26,"end":27,"cssClass":"pl-pds"}],[{"start":10,"end":19,"cssClass":"pl-c1"}],[],[{"start":2,"end":35,"cssClass":"pl-c"},{"start":2,"end":4,"cssClass":"pl-c"}],[],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":5,"end":22,"cssClass":"pl-en"}],[{"start":8,"end":17,"cssClass":"pl-c1"}],[],[],[],[{"start":7,"end":28,"cssClass":"pl-en"},{"start":33,"end":39,"cssClass":"pl-k"}],[],[{"start":15,"end":33,"cssClass":"pl-en"},{"start":38,"end":44,"cssClass":"pl-k"}],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":4,"end":24,"cssClass":"pl-en"}],[],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":19,"end":23,"cssClass":"pl-c1"}],[{"start":4,"end":10,"cssClass":"pl-k"}],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":null,"configFilePath":null,"networkDependabotPath":"/HayaShalaby/CS2PROJ-milestone2/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false,"repoAlertsPath":"/HayaShalaby/CS2PROJ-milestone2/security/dependabot","repoSecurityAndAnalysisPath":"/HayaShalaby/CS2PROJ-milestone2/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"Document.cpp","displayUrl":"https://github.com/HayaShalaby/CS2PROJ-milestone2/blob/main/CSproj%202/Document.cpp?raw=true","headerInfo":{"blobSize":"740 Bytes","deleteInfo":{"deleteTooltip":"Delete this file"},"editInfo":{"editTooltip":"Edit this file"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"9bf5762","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FHayaShalaby%2FCS2PROJ-milestone2%2Fblob%2Fmain%2FCSproj%25202%2FDocument.cpp","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"43","truncatedSloc":"33"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C++","languageID":43,"large":false,"loggedIn":true,"newDiscussionPath":"/HayaShalaby/CS2PROJ-milestone2/discussions/new","newIssuePath":"/HayaShalaby/CS2PROJ-milestone2/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/HayaShalaby/CS2PROJ-milestone2/blob/main/CSproj%202/Document.cpp","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/HayaShalaby/CS2PROJ-milestone2/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"HayaShalaby","repoName":"CS2PROJ-milestone2","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":null,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"Document","kind":"method","identStart":92,"identEnd":100,"extentStart":82,"extentEnd":141,"fullyQualifiedName":"Document::Document","identUtf16":{"start":{"lineNumber":5,"utf16Col":10},"end":{"lineNumber":5,"utf16Col":18}},"extentUtf16":{"start":{"lineNumber":5,"utf16Col":0},"end":{"lineNumber":8,"utf16Col":1}}},{"name":"Document","kind":"method","identStart":153,"identEnd":161,"extentStart":143,"extentEnd":211,"fullyQualifiedName":"Document::Document","identUtf16":{"start":{"lineNumber":10,"utf16Col":10},"end":{"lineNumber":10,"utf16Col":18}},"extentUtf16":{"start":{"lineNumber":10,"utf16Col":0},"end":{"lineNumber":13,"utf16Col":1}}},{"name":"setFileName","kind":"method","identStart":228,"identEnd":239,"extentStart":213,"extentEnd":269,"fullyQualifiedName":"Document::setFileName","identUtf16":{"start":{"lineNumber":15,"utf16Col":15},"end":{"lineNumber":15,"utf16Col":26}},"extentUtf16":{"start":{"lineNumber":15,"utf16Col":0},"end":{"lineNumber":15,"utf16Col":56}}},{"name":"setLines","kind":"method","identStart":286,"identEnd":294,"extentStart":271,"extentEnd":478,"fullyQualifiedName":"Document::setLines","identUtf16":{"start":{"lineNumber":17,"utf16Col":15},"end":{"lineNumber":17,"utf16Col":23}},"extentUtf16":{"start":{"lineNumber":17,"utf16Col":0},"end":{"lineNumber":26,"utf16Col":1}}},{"name":"addLine","kind":"method","identStart":495,"identEnd":502,"extentStart":480,"extentEnd":553,"fullyQualifiedName":"Document::addLine","identUtf16":{"start":{"lineNumber":28,"utf16Col":15},"end":{"lineNumber":28,"utf16Col":22}},"extentUtf16":{"start":{"lineNumber":28,"utf16Col":0},"end":{"lineNumber":31,"utf16Col":1}}},{"name":"getFileName","kind":"method","identStart":572,"identEnd":583,"extentStart":555,"extentEnd":606,"fullyQualifiedName":"Document::getFileName","identUtf16":{"start":{"lineNumber":33,"utf16Col":17},"end":{"lineNumber":33,"utf16Col":28}},"extentUtf16":{"start":{"lineNumber":33,"utf16Col":0},"end":{"lineNumber":33,"utf16Col":51}}},{"name":"getLines","kind":"method","identStart":633,"identEnd":641,"extentStart":608,"extentEnd":661,"fullyQualifiedName":"Document::getLines","identUtf16":{"start":{"lineNumber":35,"utf16Col":25},"end":{"lineNumber":35,"utf16Col":33}},"extentUtf16":{"start":{"lineNumber":35,"utf16Col":0},"end":{"lineNumber":35,"utf16Col":53}}},{"name":"numOfLines","kind":"method","identStart":677,"identEnd":687,"extentStart":663,"extentEnd":739,"fullyQualifiedName":"Document::numOfLines","identUtf16":{"start":{"lineNumber":37,"utf16Col":14},"end":{"lineNumber":37,"utf16Col":24}},"extentUtf16":{"start":{"lineNumber":37,"utf16Col":0},"end":{"lineNumber":42,"utf16Col":1}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"accessAllowed":false,"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"csrf_tokens":{"/HayaShalaby/CS2PROJ-milestone2/branches":{"post":"4o35oJRDqak6L8pXYkUGmQyQp4TpS_Um_O7bhedmAsinpMJJ2OJifyj3sMCt4YpZ-UuCg5qSeF_dopV0MhljlA"},"/repos/preferences":{"post":"tty-oSY6qN7EEVVhEVigjt8lwBLxTNWKHceHx8gjURg-L0x2SMzCZOAiDCmQlN5MGq-JbUsQ5LqJLKK6-36AEA"}}},"title":"CS2PROJ-milestone2/CSproj 2/Document.cpp at main · HayaShalaby/CS2PROJ-milestone2"}
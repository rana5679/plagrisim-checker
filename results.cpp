{"payload":{"allShortcutsEnabled":true,"fileTree":{"CS2_PlagiarismChecker":{"items":[{"name":"Corpus","path":"CS2_PlagiarismChecker/Corpus","contentType":"directory"},{"name":"CS2_PlagiarismChecker.pro","path":"CS2_PlagiarismChecker/CS2_PlagiarismChecker.pro","contentType":"file"},{"name":"CS2_PlagiarismChecker.pro.user","path":"CS2_PlagiarismChecker/CS2_PlagiarismChecker.pro.user","contentType":"file"},{"name":"corpus_names.txt","path":"CS2_PlagiarismChecker/corpus_names.txt","contentType":"file"},{"name":"document.h","path":"CS2_PlagiarismChecker/document.h","contentType":"file"},{"name":"insert_doc.cpp","path":"CS2_PlagiarismChecker/insert_doc.cpp","contentType":"file"},{"name":"insert_doc.h","path":"CS2_PlagiarismChecker/insert_doc.h","contentType":"file"},{"name":"main.cpp","path":"CS2_PlagiarismChecker/main.cpp","contentType":"file"},{"name":"mainwindow.cpp","path":"CS2_PlagiarismChecker/mainwindow.cpp","contentType":"file"},{"name":"mainwindow.h","path":"CS2_PlagiarismChecker/mainwindow.h","contentType":"file"},{"name":"mainwindow.ui","path":"CS2_PlagiarismChecker/mainwindow.ui","contentType":"file"},{"name":"plagiarismchecker.h","path":"CS2_PlagiarismChecker/plagiarismchecker.h","contentType":"file"},{"name":"results.cpp","path":"CS2_PlagiarismChecker/results.cpp","contentType":"file"},{"name":"results.h","path":"CS2_PlagiarismChecker/results.h","contentType":"file"},{"name":"results.ui","path":"CS2_PlagiarismChecker/results.ui","contentType":"file"},{"name":"userInput.txt","path":"CS2_PlagiarismChecker/userInput.txt","contentType":"file"},{"name":"userinput.cpp","path":"CS2_PlagiarismChecker/userinput.cpp","contentType":"file"},{"name":"userinput.h","path":"CS2_PlagiarismChecker/userinput.h","contentType":"file"},{"name":"userinput.ui","path":"CS2_PlagiarismChecker/userinput.ui","contentType":"file"}],"totalCount":19},"":{"items":[{"name":"CS2_PlagiarismChecker","path":"CS2_PlagiarismChecker","contentType":"directory"},{"name":"CSproj 2","path":"CSproj 2","contentType":"directory"},{"name":"CS Project Report.pdf","path":"CS Project Report.pdf","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"UML.jpg","path":"UML.jpg","contentType":"file"}],"totalCount":5}},"fileTreeProcessingTime":3.887766,"foldersToFetch":[],"reducedMotionEnabled":"system","repo":{"id":636219966,"defaultBranch":"main","name":"CS2PROJ-milestone2","ownerLogin":"HayaShalaby","currentUserCanPush":true,"isFork":false,"isEmpty":false,"createdAt":"2023-05-04T14:18:18.000+03:00","ownerAvatar":"https://avatars.githubusercontent.com/u/124674435?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1684022674.5493991","canEdit":true,"refType":"branch","currentOid":"fbbb919dd4623b4cb66c69defa7f8cbb344aa9a4"},"path":"CS2_PlagiarismChecker/results.cpp","currentUser":{"id":124688927,"login":"rana5679","userEmail":"ranataher@aucegypt.edu"},"blob":{"rawLines":["#include \"results.h\"\r","#include \"ui_results.h\"\r","\r","Results::Results(QWidget *parent, QString uFile, QString cFiles, QChar aType) :\r","    QDialog(parent),\r","    ui(new Ui::Results)\r","{\r","    ui->setupUi(this);\r","    PlagiarismChecker p(uFile,cFiles,aType);\r","    p.compDoc();\r","    ui->textEdit_plag->setText(QString::number(p.getTotalPlag()));\r","    ui->textEdit_sim->setText(QString::number(p.getTotalSim()));\r","    ui->textEdit_ref->setText(QString::number(p.getTotalRef()));\r","    ui->textEdit_quote->setText(QString::number(p.getTotalQuotes()));\r","    QFile file(\"userInput.txt\");\r","    QTextStream stream(&file);\r","\r","    if (file.open(QIODevice::ReadWrite)) {\r","        file.resize(0);\r","        stream.flush();\r","    }\r","    file.close();\r","\r","}\r","\r","Results::~Results()\r","{\r","    delete ui;\r","}\r"],"stylingDirectives":[[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":20,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":19,"end":20,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":23,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":22,"end":23,"cssClass":"pl-pds"}],[],[{"start":0,"end":16,"cssClass":"pl-en"}],[],[{"start":7,"end":10,"cssClass":"pl-k"}],[],[{"start":8,"end":15,"cssClass":"pl-c1"},{"start":16,"end":20,"cssClass":"pl-c1"}],[{"start":22,"end":23,"cssClass":"pl-smi"}],[{"start":6,"end":13,"cssClass":"pl-c1"}],[{"start":8,"end":21,"cssClass":"pl-smi"},{"start":23,"end":30,"cssClass":"pl-c1"},{"start":31,"end":46,"cssClass":"pl-c1"},{"start":49,"end":61,"cssClass":"pl-c1"}],[{"start":8,"end":20,"cssClass":"pl-smi"},{"start":22,"end":29,"cssClass":"pl-c1"},{"start":30,"end":45,"cssClass":"pl-c1"},{"start":48,"end":59,"cssClass":"pl-c1"}],[{"start":8,"end":20,"cssClass":"pl-smi"},{"start":22,"end":29,"cssClass":"pl-c1"},{"start":30,"end":45,"cssClass":"pl-c1"},{"start":48,"end":59,"cssClass":"pl-c1"}],[{"start":8,"end":22,"cssClass":"pl-smi"},{"start":24,"end":31,"cssClass":"pl-c1"},{"start":32,"end":47,"cssClass":"pl-c1"},{"start":50,"end":64,"cssClass":"pl-c1"}],[{"start":10,"end":14,"cssClass":"pl-smi"},{"start":15,"end":30,"cssClass":"pl-s"},{"start":15,"end":16,"cssClass":"pl-pds"},{"start":29,"end":30,"cssClass":"pl-pds"}],[{"start":16,"end":22,"cssClass":"pl-smi"}],[],[{"start":4,"end":6,"cssClass":"pl-k"},{"start":13,"end":17,"cssClass":"pl-c1"}],[{"start":13,"end":19,"cssClass":"pl-c1"},{"start":20,"end":21,"cssClass":"pl-c1"}],[{"start":15,"end":20,"cssClass":"pl-c1"}],[],[{"start":9,"end":14,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":17,"cssClass":"pl-en"}],[],[{"start":4,"end":10,"cssClass":"pl-k"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":null,"configFilePath":null,"networkDependabotPath":"/HayaShalaby/CS2PROJ-milestone2/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false,"repoAlertsPath":"/HayaShalaby/CS2PROJ-milestone2/security/dependabot","repoSecurityAndAnalysisPath":"/HayaShalaby/CS2PROJ-milestone2/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"results.cpp","displayUrl":"https://github.com/HayaShalaby/CS2PROJ-milestone2/blob/main/CS2_PlagiarismChecker/results.cpp?raw=true","headerInfo":{"blobSize":"777 Bytes","deleteInfo":{"deleteTooltip":"Delete this file"},"editInfo":{"editTooltip":"Edit this file"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"474aef0","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FHayaShalaby%2FCS2PROJ-milestone2%2Fblob%2Fmain%2FCS2_PlagiarismChecker%2Fresults.cpp","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"29","truncatedSloc":"25"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C++","languageID":43,"large":false,"loggedIn":true,"newDiscussionPath":"/HayaShalaby/CS2PROJ-milestone2/discussions/new","newIssuePath":"/HayaShalaby/CS2PROJ-milestone2/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/HayaShalaby/CS2PROJ-milestone2/blob/main/CS2_PlagiarismChecker/results.cpp","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/HayaShalaby/CS2PROJ-milestone2/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"HayaShalaby","repoName":"CS2PROJ-milestone2","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":null,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"Results","kind":"method","identStart":58,"identEnd":65,"extentStart":49,"extentEnd":730,"fullyQualifiedName":"Results::Results","identUtf16":{"start":{"lineNumber":3,"utf16Col":9},"end":{"lineNumber":3,"utf16Col":16}},"extentUtf16":{"start":{"lineNumber":3,"utf16Col":0},"end":{"lineNumber":23,"utf16Col":1}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"accessAllowed":false,"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"csrf_tokens":{"/HayaShalaby/CS2PROJ-milestone2/branches":{"post":"TxOGJ44yr9yhmd8NP7zMxsZlHMV2wCRDMRa6G8dIo3QKOr3OwpNkCrNBpZrwGEAGM745wgUZqToQWvTqEjfCKA"},"/repos/preferences":{"post":"4DmFhtMQ_08znGpqXWcEXo_q2tPzgb1flbkZLTSTsE5oyndRveaV9RevMyLcq3qcSmCTrEndjG8BUjxQB85hRg"}}},"title":"CS2PROJ-milestone2/CS2_PlagiarismChecker/results.cpp at main · HayaShalaby/CS2PROJ-milestone2"}